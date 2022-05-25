// Copyright 2022 Eric Jones

#include "./concreteDecoratorC.h"
#include <iostream>

concreteDecoratorC::concreteDecoratorC(std::shared_ptr<component> obj) :
    decorator(obj) {
}

concreteDecoratorC::~concreteDecoratorC() {
}

std::string concreteDecoratorC::operation() {
    return decorator::operation() + "C";
}
