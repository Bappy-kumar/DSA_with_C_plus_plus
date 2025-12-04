#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;
class Student { // "<" overload
	public:
		string name;
		int marks;
		
		Student(string name, int marks) {
			this->name = name;
			this->marks = marks;
		}
		
		bool operator < (const Student &obj) const {
//			return this->marks < obj.marks; //ascending order
			return this->name < obj.name; //ascending order

		}
};
int main()
{
	priority_queue<Student> pq;
	
	pq.push(Student("aman", 85));
	pq.push(Student("bhumika", 95));
	pq.push(Student("chetan", 65));
	
	while(!pq.empty()) {
		cout<< "top = "<<pq.top().name <<","<< pq.top().marks << endl;
		pq.pop();
	}
	
    return 0;
}