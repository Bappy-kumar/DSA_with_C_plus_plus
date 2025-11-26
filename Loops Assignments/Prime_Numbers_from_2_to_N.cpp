#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	
	int N;
	cout<<"Enter a positive number (N >= 2): "<<endl;
	cin>>N;
	cout<< "Prime numbers form 2 to "<< N << " are:\n";
	
	for(int num = 2; num <= N; num++)
	{
	
	bool isPrime = true;
	for(int i = 2; i<=sqrt(num); i++)
	{
		if(num%i ==0)
		{
			isPrime = false;
			break;
		}
	}
	if(isPrime) 
	{
		cout<< num << " ";
	}
	
}
	
cout<<endl;	
	
	
	
	return 0;
}