/* Reference Variables

Reference variable is an alternative name (alias) of already existing variable.

int a = 5;

int &b = a;

a & b refer to the same location in memory.

*/

#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int &b = a;
	b=25;
	cout<< b <<endl;
	cout<< a <<endl;
	return 0;
}