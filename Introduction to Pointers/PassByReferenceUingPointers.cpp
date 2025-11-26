/* Pass by reference:

1. using pointers
2. using reference variables

*/

// Pass by reference using pointers:

#include<iostream>
using namespace std;

void changeA(int *ptr) {
	*ptr = 20;
	cout<< *ptr <<endl;
}

int main()
{
	int a = 10;
	changeA(&a);
	
	
	cout<< a <<endl;
	
	
	
	
	
	return 0;
}