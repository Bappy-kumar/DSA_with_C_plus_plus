#include<iostream>
using namespace std;

int main()
{
	
	int N;
	cout<<"Enter the number of terms (N > 2): ";
	cin>>N;
	
	if(N <= 2) 
	{
		
		cout<<"Please enter a number greater than 2."<<endl;
		
	}
	
	int first = 0;
	int second = 1;
	
	cout<< first << " "<< second << " ";
	
	for(int i = 2; i < N; i++)
	{
		int next = first + second;
		cout<< next << " ";
		first = second;
		second = next;
	}
	
	
	
	
	return 0;
}