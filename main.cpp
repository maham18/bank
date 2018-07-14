#include<iostream>
#include<string.h>
#include"bankaccount.h"
using namespace std;
int main()
{
    BankAccount myacc;
    myacc.setcurrentBalance(800000);/*Null constructor call*/
    myacc.Deposit(500);
    myacc.Display();
    cout <<endl;
    BankAccount sam(3456,"jam",200000);/*parameterized constructor call*/
    sam.Withdraw(1000);
    sam.Display();
    cout <<endl;
    BankAccount saman(sam);/*copy constructor call*/
    saman.Display();
    cout <<endl;
    getchar();
}