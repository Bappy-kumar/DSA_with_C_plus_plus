#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<int, string> m;
	
	m[101] = "rahul";
	m[110] = "neha";
	m[131] = "rahul";
	m[101] = "rajat";
    cout<< m.count(101) << endl; //1
    cout<< m.count(120) << endl; //0
	cout << m[101] << endl;
	
	for(auto it:m){
		cout<<"key = " << it.first << "," <<" value =  "<< it.second <<endl ;
		cout<< "double = " << it.first * 2 <<endl;
	}
	
	
	
	
	return 0;
}