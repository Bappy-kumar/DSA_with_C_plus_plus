// WAP where user can keep entering numbers till they enter a multiple of 10:
#include<iostream>
using namespace std;

int main()
{
	
//	int num;
//	
//	
//	while(true)
//	{
//		cout<<"Enter number: "<<endl;
//		cin>>num;
//		if(num % 10 == 0)
//		{
//			break;
//		}
//		cout<< num <<endl;
//		num++;
//	}

int n;

do {
	cout<<"Enter the number: "<<endl;
	cin>>n;
	if(n%10 == 0)
	{
		break;
	}
	cout<<"you entered "<< n <<endl;
}while(true);
	
	
	
	return 0;
}