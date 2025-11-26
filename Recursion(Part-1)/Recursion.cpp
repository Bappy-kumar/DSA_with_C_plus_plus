#include<iostream>
using namespace std;

//recursive function - recursion
void func() {
	cout<<"function call.. work"<<endl;
	func();
}

int main()
{
	
	func();
	
	
	
	return 0;
}