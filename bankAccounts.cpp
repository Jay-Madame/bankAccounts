#include "bankAccounts.h"

bankAccounts::bankAccounts(double startBal, double interestR) : balance(startBal), APR(interestR), numWithdrawals(0),
                                                                numDeposits(0), monthlyService(0) {}
bankAccounts::bankAccounts() : balance(0), APR(0), numWithdrawals(0),
                               numDeposits(0), monthlyService(0) {}
void bankAccounts::deposit(double amt)
{
    if (amt > 0)
    {
        balance += amt;
        numDeposits++;
    }
}
void bankAccounts::withdraw(double amt)
{
    if (amt > 0)
    {
        balance -= amt;
        numWithdrawals++;
    }
}
void bankAccounts::calcInt() {
    double monthlyIntRate = APR/12;
    double monthlyInterest = monthlyIntRate*balance;
    balance += monthlyInterest;
}
void bankAccounts::monthlyProc() {
    balance -= monthlyService;
    calcInt();
    numDeposits = 0;
    numWithdrawals = 0;
    monthlyService = 0;
}
double bankAccounts::getBalance() {
    return balance;
}
int bankAccounts::getNumWithdrawals() {
    return numWithdrawals;
}
int bankAccounts::getNumDeposits() {
    return numDeposits;
}
double bankAccounts::getAPR() {
    return APR;
}
double bankAccounts::getMonthlyService() {
    return monthlyService;
}