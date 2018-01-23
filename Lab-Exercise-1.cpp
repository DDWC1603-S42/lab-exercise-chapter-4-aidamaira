//Find the sum of digits of a given number

#include <iostream>
using namespace std;

int main()
{

	int no1,no2,r,sum;

	cout<<"Input number"<<endl;
	cin>> no1 >> no2

	sum = no1 + no2


	while(no2>0)
	{
	r=no1%10;
	no1=no1/10;
	sum=sum+r;

	}
	cout<<"The sum is:"<<sum<<endl;
	
	return 0;
	
}
       cout<<"Find the sum of a given number"<<endl;
       cout<<".............................."<<endl;
