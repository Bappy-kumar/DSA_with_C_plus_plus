#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str1[100];
//	str1 = "apna college";
     strcpy(str1, "apna college");
	cout<< str1 <<endl;
	char str2[100] = " hello world";
	strcpy(str1, str2);
	cout<<str1<<endl;
	char str3[100] = "Bappy ";
	char str4[100] = "Kumar";
	strcat(str3, str4);
	cout<<str3<<endl;
	cout<< strcmp(str1,str2)<<endl;
	return 0;
}