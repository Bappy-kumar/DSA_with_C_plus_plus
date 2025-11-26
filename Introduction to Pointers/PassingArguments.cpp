/* Passing Arguments

Pass by value:                         

When parameter is a copy of actual argument variable in memory.

Pass by reference:(pass by address)

When we pass the reference of argument to the function.

*/

// Pass by value Example:

#include<iostream>
using namespace std;

void changeA(int a) {
	a = 20;
	cout<< a <<endl;
}

int main()
{
	int a = 10;
	changeA(a);
	
	cout<< a <<endl;
	
	
	return 0;
}
