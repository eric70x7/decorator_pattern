// Copyright 2022 Eric Jones

#include "./decorator.h"

decorator::decorator(std::shared_ptr<component> o) :
    wrappedObj(o)
{
}

decorator::~decorator() {
}
