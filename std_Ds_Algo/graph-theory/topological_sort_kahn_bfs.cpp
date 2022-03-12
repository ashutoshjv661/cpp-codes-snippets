// topological sorting using Kahn Algorithm (Modified BFS)
//  on Directed acyclic graph
#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <list>
using namespace std;

class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[V];
    }

    void addEdge(int i, int j, bool undir = true)
    {
        // directed graph
        l[i].push_back(j);
    }

    void printAdjList()
    {
        // Iterate over all the rows
        for (int i = 0; i < V; i++)
        {
            cout << i << "-->";
            // every element of ith linked List
            for (auto node : l[i])
            { // foreach loop
                cout << node << ", ";
            }
            cout << endl;
        }
    }

    // Topological sort Algorithm
    void topological_sort()
    {
        vector<int> indegree(V, 0);
        // iterate over all edges to find right indegree
        for (int i = 0; i < V; i++)
        {
            for (auto nbr : l[i])
            {
                indegree[nbr]++;
            }
        }

        // bfs logic , kahn algo

        queue<int> q;
        // init the queue with nodes of indegree 0
        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }

        // start popping
        while (!q.empty())
        {
            int node = q.front();
            cout << node << endl;
            q.pop();
            // iterate over the neighnours and reduce their indegree by one
            for (auto nbr : l[node])
            {
                indegree[nbr]--;
                // the neighbour has 0 indegree push it into the queue
                if (indegree[nbr] == 0)
                    q.push(nbr);
            }
        }
    }
};
int main()
{
    Graph g(6);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 4);
    g.addEdge(4, 5);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.printAdjList();
    g.topological_sort();
    return 0;
}