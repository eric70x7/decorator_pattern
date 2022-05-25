// Copyright 2022 Eric Jones

#ifndef COMPONENT_H_
#define COMPONENT_H_

#include <string>

#pragma once

class component {
 public:
    component();
    ~component();

    virtual std::string operation() = 0;
 private:
};

#endif  // COMPONENT_H_
