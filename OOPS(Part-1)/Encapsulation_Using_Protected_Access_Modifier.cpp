#include<iostream>
using namespace std;
class Person {
	protected:
		int age; // accessible to child classes
		
		public:
			void setAge(int a) {
				if(a > 0) age = a;
			}
			void showAge()
			{
				cout<< "Age: "<< age <<endl;
			}
};
class Student : public Person {
	public:
		void birthday() {
			age++; // Can access age directly because it's protected
		}
};
int main()
{
	Student s;
	s.setAge(20); 
	s.birthday(); // increases age
	s.showAge();   // shows 21
 	// s.age = 50; Error: age is protected (not accessible here)
	return 0;
}