#include "savings.h"

Savings::Savings(double bal, double APR)
: bankAccounts(bal, APR)
{
    setActivity();
}
Savings::Savings() : bankAccounts()
{
    setActivity();
}
void Savings::withdraw(double amt)
{
    if (isActive)
        bankAccounts::withdraw(amt);
    setActivity();
}
void Savings::deposit(double amt)
{
    bankAccounts::deposit(amt);
    setActivity();
}
void Savings::monthlyProc()
{
    if (numWithdrawals > 4)
        monthlyService += (numWithdrawals - 4);
    bankAccounts::monthlyProc();
    setActivity();
}
void Savings::setActivity()
{
    isActive = balance >= 25;
}