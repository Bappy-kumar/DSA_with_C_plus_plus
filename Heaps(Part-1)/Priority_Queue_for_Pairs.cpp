#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;
class Student { // "<" overload
	public:
		string name;
		int rank;
		Student(string name, int rank) {
			this->name = name;
			this->rank = rank;
		}
		bool operator < (const Student &obj) const {
//			return this->marks < obj.marks; //ascending order
			return this->name < obj.name; //ascending order

		}
};
struct ComparePair {
	bool operator () (pair<string, int> &p1, pair<string, int> &p2) {
		return p1.second > p2.second;
	}
};
int main()
{
	priority_queue<pair<string, int>, vector<pair<string, int>>, ComparePair> pq; //default - maxHeap; "first"
	pq.push(make_pair("aman", 500));
	pq.push(make_pair("bhumika", 1000));
	pq.push(make_pair("chetan", 100));
	while(!pq.empty()) {
		cout<< "top = "<<pq.top().first <<","<< pq.top().second << endl;
		pq.pop();
	}
	 return 0;
}