#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxActivities(vector<int> start, vector<int> end) {
	//sort on end time
	//A0 select
	cout<< "selecting A0\n";
	int count = 1;
	int currEndTime = end[0];
	for(int i = 1; i< start.size(); i++) {
		if(start[i] >= currEndTime) { //non-overlapping
		    cout<< "selecting A" << i <<endl;
			count++;
			currEndTime = end[i];
		}
	}
	return count;
}

//bool comp(int a, int b) {
//	return a > b; //true
//}


bool compare(pair<int, int> p1, pair<int, int> p2) {
	return p1.second < p2.second; //ascending
//	return p1.second > p2.second; //descending
//	
//	return p1.first < p2.first; //ascending - start
//	return p1.first > p2.first; //descending - start
}

int main()
{
	vector<int> start = {0, 1, 2};
	vector<int> end = {9, 2, 4};
	
//	vector<int> vec(5, 0);
	vector<pair<int, int>> activity(3, make_pair(0, 0));
	activity[0] = make_pair(0, 9);
	activity[1] = make_pair(1, 2);
	activity[2] = make_pair(2, 4);
	
	for(int i =0; i<activity.size(); i++) {
		cout<< "A" << i <<" : "<< activity[i].first << "," <<activity[i].second << endl;
	}
	
	sort(activity.begin(), activity.end(), compare);
	
	cout<< "----------sorted----------\n";
	
		for(int i =0; i<activity.size(); i++) {
		cout<< "A" << i <<" : "<< activity[i].first << "," <<activity[i].second << endl;
	}
	
	return 0;
}