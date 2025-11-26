#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the length of an array : "<<endl;
	cin>>n;
	
	int arr[n];
	
	cout<<"enter the array elements: "<<endl;
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		
	}
	
	int min = arr[0];
	
	for(int i=0; i<n; i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	
	cout<<"min = "<<min<<endl;
	
	
	
	
	return 0;
}