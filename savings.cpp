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
    if (numWithdrawals > MAX_MONTHLY_WITHDRAWALS)
        monthlyService += (numWithdrawals - MAX_MONTHLY_WITHDRAWALS) * WITHDRAWAL_FEE;
    bankAccounts::monthlyProc();
    setActivity();
}
void Savings::setActivity()
{
    isActive = balance >= MINIMUM_BALANCE;
}