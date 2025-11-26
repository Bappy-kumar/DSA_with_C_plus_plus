#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the number: "<<endl;
	cin>>num;
	if(num<=1)
	{
		cout<<"The number is not a prime number: "<<num<<endl;
		return 0;
	}
	bool isPrime = true;
	
	for(int i= 2; i<=sqrt(num); i++)
	{
		if(num%i == 0) {
			isPrime = false;
			break;
		}
	}
	
	if(isPrime) 
	{
		cout<<"number is Prime"<<endl;
	}
	else
	{
		cout<<"number is NOT Prime"<<endl;
	}
     return 0;
}