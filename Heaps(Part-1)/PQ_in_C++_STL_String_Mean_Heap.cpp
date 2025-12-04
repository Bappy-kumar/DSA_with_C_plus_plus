#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
	priority_queue<string, vector<string>, greater<string>> pq;
	
	pq.push("Hello World");
	pq.push("Bappy Kumar");
	pq.push("C++");
	pq.push("Alpha");
	
	while(!pq.empty()) {
	cout<< "top : " << pq.top() << endl;
	pq.pop();

	}
	
	return 0;
}