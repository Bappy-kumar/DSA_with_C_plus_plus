// swapping without using third variable:
#include<iostream>
using namespace std;

int main()
{      
      int a,b;
     cout<<"Enter two numbers to perform swapping: "<<endl;
     cin>>a>>b;
     a = a+b;
     b = a-b;
     a = a-b;
     
     cout<<"numbers after swapping are: "<<a<<" "<<b<<endl;
     
	
	
	
	return 0;
}