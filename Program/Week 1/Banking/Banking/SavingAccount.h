#pragma once
#include <iostream>
#include "Account.h"
using namespace std;

class SavingAccount: public Account
{
public:
	SavingAccount();
	SavingAccount(double , double);
	double calculateInterest();


private:
	double interestRate;


	
};

