#pragma once
#include "bankAccounts.h"
class Checking : public bankAccounts
{
protected:
    bool isActive;

public:
    using bankAccounts::bankAccounts;
    virtual void withdraw(double amt);
    virtual void monthlyProc();
    const double SERVICE_CHARGE = 15;
    const double MONTHLY_FEE = 5;
    const double WITHDRAWAL_FEE = .1;
};