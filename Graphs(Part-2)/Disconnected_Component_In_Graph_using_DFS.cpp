#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Graph {
	int V;
	list<int> * l;
	public:
		Graph(int V) {
			this->V = V;
			l = new list<int> [V];
//			int *arr;
//			arr = new int[V];
                     }
          void addEdge(int u, int v) { //u----v
          	l[u].push_back(v);
          	l[v].push_back(u);
		  } 
		             
           void print() {
           	    for(int u = 0; u<V; u++) { //0, 1, 2, 3, 4
           		list<int> neighbors = l[u];
           		cout<< u <<" : ";
           		for(int v : neighbors) {
           			cout<< v << " ";
				   }
				   cout<< endl;
			   }
		   }
		   
		   void dfsHelper(int u, vector<bool> &vis) { // O(V + E)
		   	cout<< u << " ";
		   	vis[u] = true;

		   	
		   	list<int> neighbors = l[u];
		   	for(int v : neighbors) {
		   		if(!vis[v]) {
		   			dfsHelper(v,vis); 
				   }
			   }
		   	
		   }   
		   
		   void dfs() {
		   	vector<bool> vis(V, false);
		   	for(int i = 0; i<V; i++)
		   	{
		   		if(!vis[i]) {
		   				dfsHelper(i, vis); // starting pt = i
		   				cout<< endl;
				   }
			   }
		   
		   	cout<< endl;
		   }       
};
int main()
{
	Graph graph(10);
	
	// Left Component
	graph.addEdge(1, 6);
	graph.addEdge(1, 4);
	graph.addEdge(4, 3);
    graph.addEdge(4, 9);
    graph.addEdge(3, 7);
    graph.addEdge(3, 8);
	
	// Right Component
	graph.addEdge(5,2);
	graph.addEdge(2,0);
	graph.dfs();
	return 0;
}