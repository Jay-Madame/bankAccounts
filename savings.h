#pragma once
#include "bankAccounts.h"

class Savings : protected bankAccounts
{
protected:
    bool isActive;

public:
    Savings(double bal, double APR);
    Savings();
    virtual void withdraw(double amt);
    virtual void deposit(double amt);
    virtual void monthlyProc();
    virtual void setActivity();
};