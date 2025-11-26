// C++ Program to check whether a character is Vowel or Consonants:
#include<iostream>
using namespace std;
 
int main()
{
	char ch;
	cout<<"Enter a character  to check if it is vowel or consonant: "<<endl;
	cin>>ch;
	if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I'|| ch=='O'||ch=='U')
	{
		cout<<"The given character is vowel: "<<ch<<endl;
	}
	else
	{
		cout<<"The given charactere is not a vowel: "<<ch<<endl;
	}
	
	
	
	
	return 0;
}