// Copyright 2022 Eric Jones

#include "./concreteDecoratorA.h"
#include <iostream>

concreteDecoratorA::concreteDecoratorA(std::shared_ptr<component> obj) :
    decorator(obj) {
}

concreteDecoratorA::~concreteDecoratorA() {
}

std::string concreteDecoratorA::operation() {
    return decorator::operation() + "A";
}
