// Copyright 2022 Eric Jones

#ifndef CONCRETEDECORATORA_H_
#define CONCRETEDECORATORA_H_

#include <memory>
#include <string>
#include "./decorator.h"

#pragma once

class concreteDecoratorA : public decorator {
 public:
    explicit concreteDecoratorA(std::shared_ptr<component>);
    ~concreteDecoratorA();

    std::string operation() override;
 private:
};

#endif  // CONCRETEDECORATORA_H_
