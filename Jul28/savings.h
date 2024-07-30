#pragma once
#include "bankAccounts.h"

class Savings : public bankAccounts
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
    const int MAX_MONTHLY_WITHDRAWALS = 4;
    const double WITHDRAWAL_FEE = 1;
    const double MINIMUM_BALANCE = 25;
};