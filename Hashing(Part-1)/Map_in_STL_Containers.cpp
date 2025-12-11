#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main()
{
	map<string, int> m;
	
	m["China"] = 150;
	m["India"] = 150;
	m["US"] = 50;
	m["Nepal"] = 10;
	m["Nepal"] = 200;
	m["UK"] = 20;
	
    cout<< m["India"] << endl;
	for(pair<string, int> country : m) {
		cout<< country.first << "," << country.second << endl;
	}
	
	//count -> 0, 1
	
	if(m.count("Nepal")) {
		cout<< "Nepal exists\n";
	} else {
		cout<<"Nepal doesn't exist\n";
	}
	
		if(m.count("Canada")) {
		cout<< "Canada exists\n";
	} else {
		cout<<"Canada doesn't exist\n";
	}
	
	m.erase("Nepal");
	
		if(m.count("Nepal")) {
		cout<< "Nepal exists\n";
	} else {
		cout<<"Nepal doesn't exist\n";
	}
	
	return 0;
}