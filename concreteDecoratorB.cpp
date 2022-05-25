// Copyright 2022 Eric Jones

#include "./concreteDecoratorB.h"
#include <iostream>

concreteDecoratorB::concreteDecoratorB(std::shared_ptr<component> o) :
    decorator(o) {
}

concreteDecoratorB::~concreteDecoratorB() {
}

std::string concreteDecoratorB::operation() {
    return wrappedObj->operation() + "B";
}
