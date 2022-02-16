#pragma once

#include <iostream>
using namespace std;

class Account {
private:
	double balance;


public:
	virtual void credit(double);
	virtual void debit(double);
	
	double getBalance();

	void setBalance(double);
	Account();
	Account(double);


};
