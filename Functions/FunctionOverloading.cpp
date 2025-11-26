#include<iostream>
using namespace std;

int sum(int a, int b)
{
	cout<<(a+b)<<endl;
	return a+b;
}

 int sum(double a, double b)
{
	cout<<(a+b)<<endl;
	return a+b;
}

 int sum(float a, float b)
{
	cout<<(a+b)<<endl;
	return a+b;
	
}

int main()
{
	sum(2,3);
	sum(4.5, 6.7);
	sum(4.55, 6.999);
	
	
	
	
	return 0;
}