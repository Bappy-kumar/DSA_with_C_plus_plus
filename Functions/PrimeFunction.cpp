#include<iostream>
#include<cmath>
using namespace std;

int prime(int n)
{
	if(n<=1)
	{
		cout<<"The given number is not a prime number: "<<n<<endl;
		return 0;
	}
	
	bool isPrime = true;
	for(int i = 2; i<=sqrt(n); i++)
	{
		if(n%i == 0)
		{
			isPrime = false;
			break;
		}
	}
	if(isPrime)
	{
		cout<<"The given number is a prime number: "<<n<<endl;
	}
	else
	{
		cout<<"The given number is not a prime number: "<<n<<endl;
	}
	return 0;
}

int main()
{
	int num;
	cout<<"Enter the number to check if it is prime or not: "<<endl;
	cin>>num;
	prime(num);
	
	return 0;
}