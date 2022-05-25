// Copyright 2022 Eric Jones

#ifndef CONCRETEDECORATORC_H_
#define CONCRETEDECORATORC_H_

#include <memory>
#include <string>
#include "./decorator.h"

#pragma once

class concreteDecoratorC : public decorator {
 public:
    explicit concreteDecoratorC(std::shared_ptr<component>);
    ~concreteDecoratorC();

    std::string operation() override;
 private:
};

#endif  // CONCRETEDECORATORC_H_
