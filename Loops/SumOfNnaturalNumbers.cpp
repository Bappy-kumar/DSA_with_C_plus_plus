#include<iostream>
using namespace std;

int main() 
{
	int num;
	int sum;
	cout<<"Enter the number: "<<endl;
	cin>>num;
	for(int i = 1; i<=num; i++)
	{
		sum = sum + i;
	}
	cout<<"Sum of n natural numbers is: "<<sum<<endl;
	
	
	
	return 0;
}