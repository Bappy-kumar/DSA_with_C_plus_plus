// WAP to check if a number is prime or not?
#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the number: "<<endl;
	cin>>num;
	if(num<=1)
	{
		cout<<"The given number is not a prime number: "<<num<<endl;
		return 0;
	}
	bool isPrime = true;
	for(int i = 2; i<=num-1; i++)
	{
		if(num%i==0)
		{
			isPrime = false;
			break;
		}
	}
	
	if(isPrime == true) {
		cout<<"number is prime "<< num<<endl;
	}
	else
	{
		cout<<"number is NOT prime "<< num<<endl;
	}
	
	
	
	
	return 0;
}