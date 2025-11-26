#include<iostream>
using namespace std;
class Counter {
 private:
 int count = 0; // hidden data
 public:
 void increment() {
 	count++;
 }	
 void show() {
 	cout<< "Count: " << count << endl;
 }
};

int main()
{
	Counter c;
	c.increment(); // increase count by 1
	c.increment(); // increase count by 1 again
	c.show(); // shows: Count: 2
	return 0;
}