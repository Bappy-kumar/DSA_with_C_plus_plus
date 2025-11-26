#include<iostream>
using namespace std;

class Animal {
	public:
		void eat()
		{
			cout<<"eats"<<endl;
		}
		
		void breathe()
		{
			cout<<"breathes"<<endl;
		}
		
};
 
class Bird : public Animal{
	public:
		void fly()
		{
			cout<<"fly"<<endl;
		}
};

class Fish : public Animal {
	public:
		void swim()
		{
			cout<<"swim"<<endl;
		}
};

class Mammal : public Animal {
	public:
		void walk()
		{
			cout<<"walk"<<endl;
		}
};

int main()
{
	Mammal m1;
	 m1.breathe();
	 m1.eat();
	 m1.walk();
return 0;
}