#include<iostream>
using namespace std;

int product(int a, int b)
{
  int product = a*b;
	return product;
}

int main()
{
	
  int s = 	product(5,2);
  cout<<"The product of two numbers are: "<<s<<endl;
return 0;
}