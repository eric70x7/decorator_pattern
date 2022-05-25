// Copyright 2022 Eric Jones

#ifndef CONCRETEDECORATORB_H_
#define CONCRETEDECORATORB_H_

#include <memory>
#include <string>
#include "./decorator.h"

#pragma once

class concreteDecoratorB : public decorator {
 public:
    explicit concreteDecoratorB(std::shared_ptr<component>);
    ~concreteDecoratorB();

    std::string operation() override;
 private:
};

#endif  // CONCRETEDECORATORB_H_
