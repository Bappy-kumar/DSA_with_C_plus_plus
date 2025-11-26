#include<iostream>
using namespace std;

int main() 
{
	
   int num;
   int copy;
   copy = num;
   int digit;
   int rev;
   cout<<"Enter the number to check for the armstrong number:: "<<endl;
   cin>>num;
   
   while(num!=0)
   {
   	 digit = num % 10;
   	 rev = rev * 10 + digit;
   	 num = num / 10;
   	 
   }
   
 cout<<"The reverse of a number is:: "<<rev<<endl;
   
return 0;
}