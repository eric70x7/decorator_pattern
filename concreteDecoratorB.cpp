// Copyright 2022 Eric Jones

#include "./concreteDecoratorB.h"
#include <iostream>

concreteDecoratorB::concreteDecoratorB(std::shared_ptr<component> obj) :
    decorator(obj) {
}

concreteDecoratorB::~concreteDecoratorB() {
}

std::string concreteDecoratorB::operation() {
    return decorator::operation() + "B";
}
