#include<iostream>
using namespace std;

void func(int arr[])
{
	arr[0] = 1000;
}

void func2(int *ptr)
{
	ptr[0] = 1000;
}

int main()
{
	
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/ sizeof(int);
	
    func(arr); // passing array name is eq. to passing the pointer
    func2(arr);
    cout<< arr[0]<<endl;
    return 0;
}