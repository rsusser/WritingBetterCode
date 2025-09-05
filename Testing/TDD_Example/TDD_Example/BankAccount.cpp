//
//  BankAccount.cpp
//  BetterCode_TDD_Example
//
//  Created by Rachel Susser on 30.08.25.
//

#include "BankAccount.h"

double BankAccount::getBalance() const
{
    return balance;
}

void BankAccount::deposit(double amount)
{
    balance += amount;
}
