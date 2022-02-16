#pragma once
#include "CheckingAccount.h"


//Default Constructor
CheckingAccount::CheckingAccount(){}

CheckingAccount::CheckingAccount(double balance , double fee):Account(balance)
{
	this->fee = fee;
}
void CheckingAccount::credit(double amt) {
	double balance = this->getBalance();
	balance += amt - this->fee;
	this->setBalance(balance);
}

void CheckingAccount::debit(double amt) {
	double balance = this->getBalance();

	balance -= (amt + this->fee);
	this->setBalance(balance);
}