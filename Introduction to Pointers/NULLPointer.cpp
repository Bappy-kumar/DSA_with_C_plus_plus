/*
Null Pointer:

We assign NULL value to a pointer to show that it doesn't point to any location.

int *ptr = NULL;
Dereferencing null ptr is not possible as it'll result in error.
*/


#include<iostream>
using namespace std;

int main()
{
	
	int *ptr = NULL;
	cout<< ptr <<endl;
	
	cout<<*ptr <<endl; //segementation fault.
	
	cout<<"bye"<<endl;
	return 0;
}
