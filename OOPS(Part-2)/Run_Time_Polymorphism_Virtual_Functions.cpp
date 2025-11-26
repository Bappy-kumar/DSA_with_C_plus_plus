#include<iostream>
using namespace std;
class Parent {
	public:
		virtual void hello() {
			cout<<"parent hello"<<endl;
		}
};

class Child : public Parent {
	public:
		
	void hello() {
			cout<<"child hello"<<endl;
		}
};
int main()
{
	Child child1;
	Parent *ptr;
	
	ptr = &child1; //Run time Binding
	ptr -> hello(); //Virtual Function
	return 0;
}