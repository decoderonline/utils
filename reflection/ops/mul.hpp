#pragma once

#include "../factory.hpp"
#include "register.hpp"

class MulOperator : public Operator
{
public:
    virtual int forward()
    {
        int ret = 0;
        printf("mul forward!\n");
        return ret;
    }
};

BuildOpFactory(MulOperator)

OpFactoryRegister(MulOperatorFactory, "mul");