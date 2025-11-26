#include<iostream>
#include<string>
using namespace std; 
void removeDuplicates(string str, string ans, int map[26]) {
	if(str.size() == 0) {
		cout<< "ans : "<< ans << endl;
		return;
	}
	
	int n = str.size();
	char ch = str[n-1];
	int mapIdx = (int)(str[n-1] - 'a');
	str = str.substr(0, n-1);
	
	if(map[mapIdx]) { //duplicate
		
		removeDuplicates(str, ans, map);
	 } else { //not duplicate
	 	map[mapIdx] = true;
	 	removeDuplicates(str, ch+ans, map);
	 }
	
}

int main()
{
	string str = "appnnacollege";
	string ans = "";
	int map[26] = {false};
	
	
    removeDuplicates(str, ans, map);	
	
	return 0;
}