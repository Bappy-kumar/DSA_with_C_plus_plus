// WAP to show numbers entered by user except multiples of 10;

#include<iostream>
using namespace std;

int main()
{
	int num;
	
	while(true)
	{
		cout<<"Enter the number: "<<endl;
		cin>>num;
		if(num%10 == 0)
		{
			continue;
		}
		cout<<"you entered "<< num <<endl;
		
	}
	
	
	
	
	return 0;
}