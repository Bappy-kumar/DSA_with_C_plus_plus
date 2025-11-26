#include<iostream>
using namespace std;
void oddOrEven(int num) {
	if((num & 1) == 0) {     // (!(num & 1))
		cout<<"even"<<endl;
	} else {
		cout<<"odd"<<endl;
	}
}

int main()
{
	oddOrEven(5);
	oddOrEven(8);
	return 0;
}