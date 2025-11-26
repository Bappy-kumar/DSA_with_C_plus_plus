#include<iostream>
using namespace std;
class Car {
	string name;
	string color;
	public:
		Car() {
			cout<< "constructor without params"<<endl;
		}
		
		Car(string n, string c) {
			cout<< "constructor with params"<<endl;
			name = n;
			color = c;
		}
		void start() {
			cout<< "car has started..."<<endl;
		}
		
		void stop()
		{
			cout<< "car has stopped..."<<endl;
		}
		
		//Getter
		string getName() {
			return name;
		}
};

int main()
{   Car c0; // non-parameter constructor called
	Car c1("maruti 800", "white"); // parameter constructor called
	cout<< "car name : "<< c1.getName() << endl;
	return 0;
}