// Copyright 2022 Eric Jones

#ifndef CONCRETECOMPONENT_H_
#define CONCRETECOMPONENT_H_

#include <string>
#include "./component.h"

#pragma once

class concreteComponent : public component {
 public:
    concreteComponent();
    ~concreteComponent();

    std::string operation() override;
 private:
};

#endif  // CONCRETECOMPONENT_H_
