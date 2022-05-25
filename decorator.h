// Copyright 2022 Eric Jones

#ifndef DECORATOR_H_
#define DECORATOR_H_

#include <memory>
#include <string>
#include "./component.h"

#pragma once

class decorator : public component {
 public:
    explicit decorator(std::shared_ptr<component>);
    ~decorator();

    std::string operation() override;

 private:
    std::shared_ptr<component> wrappedObj;
};

#endif  // DECORATOR_H_
