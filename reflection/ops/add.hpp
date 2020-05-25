#pragma once

#include "../factory.hpp"
#include "register.hpp"

class AddOperator : public Operator
{
public:
    virtual int forward()
    {
        int ret = 0;
        printf("add forward!\n");
        return ret;
    }
};

BuildOpFactory(AddOperator)

OpFactoryRegister(AddOperatorFactory, "add");