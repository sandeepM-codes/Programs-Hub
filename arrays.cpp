#include <iostream>
using namespace std;
int main()
{
	int array[5],total,i;
	cout<<"*****Plz enter Your Desired Numbers ::******"<<endl;

	for(i=0;i<5;i++)
	{
	
	cout<<"Enter Number"<<endl;
	
	cin>>array[i];
    }
    for (i=0;i<5;i++)
    {
    total = array[i]+100;
    	
    	cout<<"At Number___"<<i<<"___By adding i+100, The Value is____"<<total<<endl;
	}
	return 0;
}
