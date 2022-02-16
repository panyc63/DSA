#pragma once
#include "Account.h"

//Default Constructor
Account::Account() {}

Account::Account(double bal): balance(bal) {

	if (bal < 0)
	{
		cout << "Balance has to be greater than 0" << endl;
		bal = 0;
		
	} 
	this->balance = bal;

}
void Account::setBalance(double amt) {
	this->balance = amt;
}

double Account::getBalance()
{
	
	return this->balance;
}


void Account::credit(double amt)
{
	this->balance += amt;
}
void Account::debit(double amt)
{
	if (amt > this->balance)
	{
		cout << "Debit amount exceeded account balance" << endl;
	}
	else {
		this->balance -= amt;

	}
}