#pragma once
#include "SavingAccount.h"

//Default Constructor
SavingAccount::SavingAccount()
{
}
SavingAccount::SavingAccount(double balance, double interestR):Account(balance) {
	this->interestRate = interestR;
}

double SavingAccount::calculateInterest()
{
	return this->interestRate * this->getBalance();
}