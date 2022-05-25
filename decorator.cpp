// Copyright 2022 Eric Jones

#include "./decorator.h"

decorator::decorator(std::shared_ptr<component> obj) :
    wrappedObj(obj) {
}

decorator::~decorator() {
}

std::string decorator::operation() {
    return wrappedObj->operation();
}
