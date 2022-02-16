// Banking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std; 
#include "CheckingAccount.h"
#include "SavingAccount.h"
#include "Account.h"
#include "Banking.h"

void calInt(vector<Account*> accVec, int accType)
{

    Account* a = accVec[accType - 1];
    SavingAccount* SA = dynamic_cast<SavingAccount*>(a);
    cout << "Interest: " << +SA->calculateInterest() << endl;
}
void checkBal(Account* a) {

    cout << "The balance in account is :" << a->getBalance() << endl;
}
void withdraw(vector<Account*> accVec, int accType) {
    int amt;

    Account* a = accVec[accType - 1];
    checkBal(a);


    cout << "Enter amount to withdraw: ";
    cin >> amt;
    if (accType == 1)
    {
        SavingAccount* SA = dynamic_cast<SavingAccount*>(a);
        SA->debit(amt);
    }
    else if (accType == 2)
    {
        CheckingAccount* CA = dynamic_cast<CheckingAccount*>(a);
        CA->debit(amt);
    }

    checkBal(a);

}
void deposit(vector<Account*> accVec, int accType)
{
    int amt;

    Account* a = accVec[accType - 1];
    cout << "Enter amount to deposit: ";
    cin >> amt;
    if (accType == 1)
    {
        SavingAccount* SA = dynamic_cast<SavingAccount*>(a);
        SA->credit(amt);
    }
    else if (accType == 2)
    {
        CheckingAccount* CA = dynamic_cast<CheckingAccount*>(a);
        CA->credit(amt);
    }

    checkBal(a);
}




int main()
{
    bool valid = true;

    SavingAccount SA(2500, 1.2);
    CheckingAccount CA(1500, 5);
    vector <Account*> accVec(2);
    accVec[0] = &SA;
    accVec[1] = &CA;

   do {
       int opt,accType;

       cout << "Enter Account Type ( 1 for Saving , 2 for Checking)  : ";
       cin >> accType;
       if (accType != 1 || accType != 2)
       {
           valid = false;
           continue;
       }
       cout << "=============================\n";
       cout << "1) Withdraw Balance\n";
       cout << "2) Deposit Balance\n";
       cout << "3) Check Balance Balance\n";
       if (accType == 1) {
           cout << "4) Calculate Interest\n";
       }
       cout << "0) Exit\n";
       cout << "=============================" << endl;
       
       cout << "Enter a number:";
       cin >> opt;

        if (opt == 1)
        {

            withdraw(accVec , accType);

        }
        else if (opt == 2) {

            deposit(accVec,accType);
        }

        else if (opt == 3)
        {             
            Account* a = accVec[accType - 1];
            checkBal(a);

        }
        else if (opt == 4 && accType == 1)
        {
            calInt(accVec,accType);
        }
        else {
            valid = false;
        }


   } while (valid);
}






