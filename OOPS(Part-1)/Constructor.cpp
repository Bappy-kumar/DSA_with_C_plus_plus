#include<iostream>
using namespace std;
class Car {
	string name;
	string color;
	public:
		Car(string nameValue, string colorValue) {
			cout<< "constructor is called. object is being created"<<endl;
			name = nameValue;
			color = colorValue;
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
{
	Car c1("maruti 800", "white");
	cout<< "car name : "<< c1.getName() << endl;
	return 0;
}