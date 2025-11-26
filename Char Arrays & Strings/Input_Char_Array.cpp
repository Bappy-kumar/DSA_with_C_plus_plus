#include<iostream>
using namespace std;

int main()
{
	
//	char word[10];
//	cin>> word;// ignore words after whitespaces
//	cout<<" your word was : "<< word <<endl;
//	cout<< " length : "<< strlen(word)<<endl;

   char sentence[30];
   cin.getline(sentence, 30, '*');
    cout<<" your word was : "<< sentence[0]<<endl;
    cout<<" length : "<< strlen(sentence)<<endl;
	
	
	return 0; 
}