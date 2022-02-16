#pragma once
#include "Account.h"
#include <iostream>
using namespace std;

class CheckingAccount: public Account
{
	public:
		CheckingAccount();
		CheckingAccount(double,double );
		virtual void debit(double );
		virtual void credit(double);
	private:
		double fee;
};

