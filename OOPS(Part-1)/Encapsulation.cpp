#include<iostream>
using namespace std;
class Person {
	private:
		int age; // hidden data
		
	public:
	void setAge(int a) {  // public method to set value
		if(a > 0) 
		age = a;
	}	
	int getAge() {  // public method to get value
		return age;
	}
};
int main()
{
	Person p;
	p.setAge(25);      // setting age
	cout<< "Age: "<< p.getAge(); // getting age
	return 0;
}