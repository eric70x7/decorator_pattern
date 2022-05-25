// Copyright 2022 Eric Jones

#include "./test_decorator.h"
#include <gtest/gtest.h>
#include <iostream>
#include <memory>

#include "./concreteComponent.h"
#include "./concreteDecoratorA.h"
#include "./concreteDecoratorB.h"
#include "./concreteDecoratorC.h"

test_decorator::test_decorator() {
}

test_decorator::~test_decorator() {
}

TEST(DecoratorSuite, Ownership) {
    std::shared_ptr<concreteComponent> comp(new concreteComponent);
    std::shared_ptr<concreteDecoratorA> a(new concreteDecoratorA(comp));
    std::shared_ptr<concreteDecoratorB> b(new concreteDecoratorB(a));
    EXPECT_EQ(2, comp.use_count());
    EXPECT_EQ(2, a.use_count());
    EXPECT_EQ(1, b.use_count());

    std::shared_ptr<concreteDecoratorC> c(new concreteDecoratorC(b));
    EXPECT_EQ(2, b.use_count());
    EXPECT_EQ(1, c.use_count());

    // decorator should still hang onto objects it wraps
    comp.reset();
    a.reset();
    b.reset();

    EXPECT_EQ(c->operation(), "0ABC");
}

TEST(DecoratorSuite, Wrap) {
    std::shared_ptr<concreteComponent> comp(new concreteComponent);
    EXPECT_EQ(comp->operation(), "0");

    std::shared_ptr<concreteDecoratorA> a(new concreteDecoratorA(comp));
    EXPECT_EQ(a->operation(), "0A");

    std::shared_ptr<concreteDecoratorB> b(new concreteDecoratorB(a));
    EXPECT_EQ(b->operation(), "0AB");

    std::shared_ptr<concreteDecoratorC> c(new concreteDecoratorC(b));
    EXPECT_EQ(c->operation(), "0ABC");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
