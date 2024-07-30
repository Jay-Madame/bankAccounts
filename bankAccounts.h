/*
[x] constructor (accepts arguments for balance and annual interest rate)

[x] deposit: A virtual function that accepts an argument for the amount
    of the deposit.  The function should add the argument to the account balance.
    It should also increment the variable holding the number of deposits.

[x] withdraw:  A virtual function that accepts an argument for the amount of the withdrawal.
    The function should subtract the argument from the balance.  It should also increment the variable
    holding the number of withdrawals.

[x] calcInt:  A virtual function that updates the balance by calculating the monthly interest earned by the account,
    and adding this interest to the balance.  This is performed with the following formulas:
    [x] Monthly Interest Rate = (Annual Interest Rate / 12)
    [x] Monthly Interest = Balance * Monthly Interest Rate
    [x] Balance = Balance + Monthly Interest

[x] monthlyProc:  A virtual function that subtracts the monthly service charges from the balance, calls the calcInt function,
    then sets the variables that hold the number of withdrawals, number of deposits, and monthly service charges to zero.
*/

#pragma once

class bankAccounts
{
protected:
    double balance;
    int numWithdrawals;
    int numDeposits;
    double APR;
    double monthlyService;

public:
    bankAccounts(double startBal, double interestR);
    bankAccounts();
    virtual void deposit(double amt);
    virtual void withdraw(double amt);
    virtual void calcInt();
    virtual void monthlyProc();
    double getBalance();
    int getNumWithdrawals();
    int getNumDeposits();
    double getAPR();
    double getMonthlyService();
};