#include "checking.h"

void Checking::withdraw(double amt)
{
    if (amt > balance)
    {
        balance -= SERVICE_CHARGE;
    }
    else
    {
        balance -= amt;
    }
}
void Checking::monthlyProc() {
    monthlyService += MONTHLY_FEE;
    monthlyService += (numWithdrawals*WITHDRAWAL_FEE);
    
}