// Name: Jewell Callahan
// Date: Jul 29 2024
// CS2 at UCA with Baarsch

#include "bankAccounts.h"
#include "bankAccounts.cpp"
#include "savings.h"
#include "savings.cpp"
#include "checking.h"
#include "checking.cpp"
#include <iostream>

void testBankAccount();
void testSavingsAccount();
void testCheckingAccount();

int main()
{
    // testSavingsAccount();
    testCheckingAccount();
    return 0;
}
void testBankAccount()
{
    bankAccounts myAccount(100, .03);
    myAccount.deposit(400);
    myAccount.withdraw(120);
    myAccount.monthlyProc();

    std::cout << myAccount.getBalance() << std::endl;
}

void testSavingsAccount()
{
    Savings myAccount(100, .03);
    myAccount.withdraw(76);
    std::cout << myAccount.getBalance() << std::endl;

    myAccount.withdraw(76);
    std::cout << myAccount.getBalance() << std::endl;
    myAccount.withdraw(76);
    std::cout << myAccount.getBalance() << std::endl;

    myAccount.withdraw(76);
    std::cout << myAccount.getBalance() << std::endl;
}

void testCheckingAccount()
{
    Checking myAccount(100, .03);
    myAccount.deposit(500);
    std::cout << myAccount.getBalance() << std::endl;

    myAccount.withdraw(700);
    std::cout << myAccount.getBalance() << std::endl;

    for (int i = 0; i < 100; i++)
    {
        myAccount.withdraw(1000);
    }

    std::cout << myAccount.getBalance() << std::endl;
    myAccount.monthlyProc();
    std::cout << myAccount.getBalance() << std::endl;
}