#include<iostream>
#include<vector>
#include<queue>
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
		   
		   void bfsHelper(int st, vector<bool> &vis) { //   TC = O(V + E)
		   	queue<int> q;
		   	q.push(st);

		   	vis[st] = true;
		   	
		   	while(q.size() > 0) {
		   		int u = q.front(); //curr vertex
		   		q.pop();
		   		cout<< u << " ";
		   		
		   		list<int> neighbors = l[u]; //u ---- v
		   		for(int v : neighbors) {
		   			if(!vis[v]) {
		   				vis[v] = true;
		   				q.push(v);
					   }
				   }
			   }
		   	cout<< endl;
		   }    
		   
		   void bfs() {
		vector<bool> vis(V, false);
		for(int i = 0; i<V; i++)
		{
			if(!vis[i]) {
				bfsHelper(i, vis);
				cout<< endl;
			}
		}

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
	graph.bfs();
	
	return 0;
}