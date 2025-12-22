#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Graph {
	int V;
	list<pair<int, int>> *l;
	public:
		Graph(int V) {
			this->V = V;
			l = new list<pair<int, int>> [V];
//			int *arr;
//			arr = new int[V];
                     }
          void addEdge(int u, int v, int wt) { //u----v
          	l[u].push_back({v,wt});
          	l[v].push_back({u,wt});
		  } 
		             
      void print() {
    for(int u = 0; u < V; u++) {
        cout << u << " : ";
        for(auto edge : l[u]) {
            cout << "(" << edge.first << ", weight=" << edge.second << ") ";
        }
        cout << endl;
    }
}
         
};
int main()
{
	Graph graph(5);
	graph.addEdge(0, 1, 4);
	graph.addEdge(1, 2, 7);
	graph.addEdge(1, 3, 1);
	graph.addEdge(2, 3, 3);
	graph.addEdge(2, 4, 6);
    graph.print();
	
	return 0;
}