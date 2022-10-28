#include<iostream>
using namespace std;
main()
{
	int x,y,even_sum=0,odd_sum=0,even_count=0,odd_count=0,z;
	
	double even_avg=0,odd_avg=0;
	
	cout<<"enter a Lowest number:";
	cin>>x;
	cout<<"enter a Higher Number:";
	cin>>y;
	for(z=x;z<=y;z++)
	{
		if(z%2==0)
		{
			even_sum=even_sum+z;
			even_count++;
		}
		else if(z%2==1)
		{
			odd_sum=odd_sum+z;
			odd_count++;
		}
		
	}
	even_avg=even_sum/even_count;
	odd_avg=odd_sum/odd_count;
	cout<<"avg of even Number is:"<<even_avg<<endl;
	cout<<"avg of odd:"<<odd_avg;
	return 0;
}
