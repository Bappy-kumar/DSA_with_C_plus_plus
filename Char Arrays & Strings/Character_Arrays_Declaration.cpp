#include<iostream>
using namespace std;

int main()
{
	char arr[5] = {'a', 'b', 'c', 'd', 'e'};
	char arr2[5] = {'c', 'o', 'd', 'e', '\0'};
	cout<< arr[0] <<endl;
	cout<< arr[1] <<endl;
	cout<< arr[2] <<endl;
	cout<< arr[3] <<endl;
	cout<< arr[4] <<endl;
	cout<< arr <<endl;
	cout<<arr2 <<endl;
	return 0;
}