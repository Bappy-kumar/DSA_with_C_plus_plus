#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str = "arya college!";
	cout<<str.length()<<endl;
	cout<< str[2]<<endl;
	cout<< str.at(2)<<endl;
	cout<<str.substr(1,5)<<endl;
	cout<<str.find("college")<<endl;
	return 0;
}