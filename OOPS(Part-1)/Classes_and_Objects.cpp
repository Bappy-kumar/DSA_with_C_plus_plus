#include<iostream>
using namespace std;
class Student {
	//Properties
    public:
    string name;	
	float cgpa;
	//Methods
	void getPercentage()
	{
	    cout<< (cgpa * 10) << "%"<<endl;	
	}
};
class User {
	int id;
	string username;
	string password;
	string bio;
	void deactivate() {
		cout<<"deleting account"<<endl;
	}
	void editBio(string newBio) {
		bio = newBio;
	}
};
int main()
{    
    Student s1; //object
    s1.cgpa = 9.0;
    s1.name = "Bappy Kumar";
    cout<< s1.name <<endl;
    cout<< s1.cgpa <<endl;
    s1.getPercentage();
    cout<< sizeof(s1)<<endl;
    return 0;
}