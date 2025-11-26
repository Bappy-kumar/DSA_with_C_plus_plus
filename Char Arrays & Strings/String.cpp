#include<iostream>
#include<string>
using namespace std;

int main()
{
//	string str = "hello";
//	cout<< str <<endl;
//	str = "yellow";
//	cout<< str<<endl;

//string str;
// cin>>str;
// cout<<str<<endl;
string str;
getline(cin, str, '.');
cout<<str<<endl;
cout<<str[0]<<endl;
cout<<str[1]<<endl;
cout<<str[2]<<endl;
	return 0;
}