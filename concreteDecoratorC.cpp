// Copyright 2022 Eric Jones

#include "./concreteDecoratorC.h"
#include <iostream>

concreteDecoratorC::concreteDecoratorC(std::shared_ptr<component> o) :
    decorator(o) {
}

concreteDecoratorC::~concreteDecoratorC() {
}

std::string concreteDecoratorC::operation() {
    return wrappedObj->operation() + "C";
}
