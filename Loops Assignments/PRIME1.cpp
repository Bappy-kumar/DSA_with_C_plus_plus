#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N;
	cout<<"Enter the number to print numbers N > 2: "<<endl;
	cin>>N;
	
	for(int num= 2; num<=N; num++)
	{
		bool isPrime = true;
		for(int i = 2; i<= sqrt(num); i++)
		{
			if(num%i == 0)
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