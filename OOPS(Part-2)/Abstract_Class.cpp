#include<iostream>
using namespace std;
// abstract class
class Shape {
	public:
		virtual void draw() = 0; //abstract function, pure virtual function
};

class Circle : public Shape {
	public:
		void draw() {
			cout<< "draw circle"<<endl;
		}
};

class Square : public Shape {
	public:
		void draw() {
			cout<<"draw square"<<endl;
		}
};
int main()
{
	Circle cir1;
	cir1.draw();
	
	Square squ1;
	squ1.draw();
	
//	Shape s1;
//	s1.draw();
	return 0;
}