#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the length of an array :  "<<endl;
	cin>>n;
	
	int arr[n];
	cout<<"enter the array elements: "<<endl;

	for(int i = 0; i<n; i++)
	{
		cin>> arr[i];
	}
	
	int max = arr[0];
		
	for(int i = 0; i<n; i++)
	{
		if(arr[i] > max) 
		{
			max = arr[i];
//			cout<<"assigning val "<< arr[i] << " to max\n";
		}
	}
	
	cout<<"max = "<<max<<endl;
	
	return 0;
}