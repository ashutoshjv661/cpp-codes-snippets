#include<iostream>
#include<queue>
#include<list>
using namespace std;

class Graph{
    int V;
    list<int> *l ;

    public:
    Graph(int v){ 
        V = v;
        l = new list<int>[V];
    }

    void addEdge(int i,int j,bool undir = true){
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }

    void printAdjList(){
        // Iterate over all the rows
        for(int i =0;i<V;i++){
            cout<<i<<"-->";
            //every element of ith linked List
            for(auto node : l[i]){   //foreach loop 
                cout<< node <<", ";
            }
            cout<<endl;
        }
    }
    
    //Code for BFS using queue
    void bfs(int source){
    	queue<int> q;
    	bool *visited = new bool[V]{0};
    	q.push(source);
    	visited[source] = true;
    	
    	while(!q.empty()){
    		int f = q.front();
    		cout<<f<<endl;
    		q.pop();
    		for(auto nbrs : l[f]){
    			if(!visited[nbrs]){
    				q.push(nbrs);
    				visited[nbrs] = true;
    			}
    		}
    	}
    	
    }
};
int main() 
{
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(2,1);
   g.addEdge(3,4);
   g.addEdge(4,5);
   g.addEdge(2,3);
   g.addEdge(3,5);
   //g.printAdjList();
   g.bfs(0);
return 0;
}

// output
// 0-->1, 4, 
// 1-->0, 2, 
// 2-->1, 3, 
// 3-->4, 2, 5, 
// 4-->0, 3, 5, 
// 5-->4, 3, 