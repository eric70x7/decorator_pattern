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

TEST(DecoratorSuite, Wrap) {
    std::shared_ptr<component> c(new concreteComponent);
    EXPECT_EQ(c->operation(), "0");

    c = std::shared_ptr<component>(new concreteDecoratorA(c));
    EXPECT_EQ(c->operation(), "0A");

    c = std::shared_ptr<component>(new concreteDecoratorB(c));
    EXPECT_EQ(c->operation(), "0AB");

    c = std::shared_ptr<component>(new concreteDecoratorC(c));
    EXPECT_EQ(c->operation(), "0ABC");

    c = std::shared_ptr<component>(new concreteDecoratorA(c));
    EXPECT_EQ(c->operation(), "0ABCA");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
