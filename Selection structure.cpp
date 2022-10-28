#include <iostream>
using namespace std;
int main()
{
    double balance;
    balance=15000;
    double amount,x;
    
    cout<<"*****Welcome To Bank Of Program:::***"<<endl;
    cout<<"Enter 1 for Deposit:"<<endl;
    cout<<"Enter 2 for Withdraw:"<<endl;
    cin>>x;
    if (x==1)
    {
        cout<<"Enter amount for Deposit:"<<endl;
        cin>>amount;
        cout<<"Amount Added::"<<amount<<endl;
        balance=balance+amount;
        
        cout<<"Current balance is : "<<balance<<endl;
        
    }
    if(x==2)
    {
        cout<<"Enter Amount For Withdraw:"<<endl;
        cin>>amount;
        
        cout<<"Amount Deducted : "<<amount<<endl;
        balance=balance-amount;
        
        cout<<"Your current balance is : "<<balance;
    }
    return 0;
}
