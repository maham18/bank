#include<iostream>
#include<string.h>
using namespace std;

class BankAccount
{
public:
    BankAccount()
    {
        this->accountNumber=1234;
        this->accountHolder="suman";
        this->currentBalance=100000;
    }
    BankAccount(int n, string h, float b)
    {
        this->accountNumber=n;
        this->accountHolder=h;
        this->currentBalance=b;
    }
    BankAccount(BankAccount& copy)
    {
        this->accountNumber=copy.accountNumber;
        this->accountHolder=copy.accountHolder;
        this->currentBalance=copy.currentBalance;
    }
    int getaccountNumber()
    {
        return this->accountNumber;
    }
    string getaccountHolder()
    {
        return this->accountHolder;
    }
    float getcurrentBalance()
    {
        return this->currentBalance;
    }
    void setaccountNumber(int a)
    {
        this->accountNumber=a;
    }
    void setaccountHolder(string h)
    {
        this->accountHolder=h;
    }
    void setcurrentBalance(float b)
    {
        this->currentBalance=b;
    }
    void Deposit(float amount)
    {
        currentBalance=currentBalance+amount;
    }
    void Withdraw(float amount)
    {
        currentBalance=currentBalance-amount;
    }
    Display()
    {
        cout << "Bank Account"<<endl<<endl;
        cout <<"Account Number: "<< this->accountNumber <<endl;
        cout <<"AccountHolder: "<< this->accountHolder <<endl;
        cout <<"Your Current Balance /= "<< this->currentBalance <<endl;
    }
private:
    int accountNumber;
    string accountHolder;
    float currentBalance;
};