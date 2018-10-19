#include "Account.h"
#include<iostream>
include<string>
using  namespace std;

Account::Account(int intialBalance)
{
    balance=0
    if (intialBalance>=0)
    balance=intialBlance
    else{
        cout<<"Error: Initial balance cannot be negative.\n" << endl;
         }
    void Account::credit(int amount)
    {
        balance=balance+amount;
    }
    void Account::debit (int amount)
    {
        if (amount > balance)
        cout<<  "Debit amount exceeded amount balance.\n"<<endl;
        else
        {
            balance=balance-amount;
        }
            
    }
    int Account::getBalance()
    {
        return balance;
    }
}


