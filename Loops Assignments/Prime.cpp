#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the number to check if it is prime or not: "<<endl;
	cin>>num;
	
	bool isPrime = true;
	for(int i = 2; i <= sqrt(num); i++)
	{
		if(num%i == 0)
		{
			isPrime = false;
			break;
		}
	}
	
	if(isPrime)
	{
		cout<<"Number is a prime: "<<num<<endl;
	}
	else
	{
		cout<<"Number is not prime: "<<num<<endl;
	}
	
	
	
	
	
	
	return 0;
}