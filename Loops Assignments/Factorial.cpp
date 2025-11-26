#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the number to find its factorial: "<<endl;
	cin>>num;
	int fact = 1;
	for(int i = 1; i<=num; i++)
	{
		fact = fact * i;
	}
	
	cout<<"factorial of a number is: "<<fact<<endl;
	
	
	return 0;
}