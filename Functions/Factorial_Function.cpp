#include<iostream>
using namespace std;

int factorial(int num)
{   
     int fact = 1;
	for(int i = 1; i<=num; i++)
	{
		fact = fact * i;
	}
	return fact;
}

int main()
{    
    int num;
	cout<<"Enter a number to find its factorial: "<<endl;
	cin>>num;
	int f=factorial(num);
	cout<<"The factorial of a number is: "<<f<<endl;
	return 0;
}