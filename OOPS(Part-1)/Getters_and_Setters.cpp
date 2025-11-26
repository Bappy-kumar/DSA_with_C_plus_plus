#include<iostream>
#include<string>
using namespace std;
class Student {
	//Properties
	string name;	
	float cgpa;
    public:
  	//Methods
	void getPercentage()
	{
	    cout<< (cgpa * 10) << "%"<<endl;	
	}
	
	//Setters
	void setName(string nameVal) {
		name = nameVal;
	}
	
	void setCgpa(float cgpaVal) {
		cgpa = cgpaVal;
	}
	
	//Getters
		string getName() {
		return name;
	}
	
	float getCgpa() {
		return cgpa;
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
    s1.setName("Bappy Kumar");
    s1.setCgpa(9.3);
    
    cout<< s1.getName() <<endl;
    cout<< s1.getCgpa() <<endl;
    cout<< sizeof(s1)<<endl;
    return 0;
}