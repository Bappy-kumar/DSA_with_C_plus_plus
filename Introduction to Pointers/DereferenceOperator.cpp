/* Dereference Operator
   Gets the value of the variable pointed by any pointer.
   * operator lets us directly access & modify the values of variable.
*/
#include<iostream>
using namespace std;

int main()
{
	
	int a = 10;
	int *ptr = &a;
	cout<<*ptr<<endl;
	cout<<&a<<endl;
	cout<<*(&a)<<endl;
	
	*ptr = 20;
	cout<<a<<endl;
	
	
	
	return 0;
}