#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    string name;
    int age,salary,days,total;
    
    cout<<"Enter Your Name__"<<endl;
    
    cin>>name;
    
    cout<<"Enter Your Age__"<<endl;
    
    cin>>age;
    
    cout<<"Enter your Per day Salary__"<<endl;
    
    cin>>salary;
    
    cout<<"Enter The number your of days of work in this Month__"<<endl;
    
    cin>>days;
    
    total=salary*days;
    
    cout<<"Your Monthly Salary is______"<<total<<endl;
    return 0;
    
}
