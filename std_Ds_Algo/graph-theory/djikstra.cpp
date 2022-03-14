// implementing dijkstra using set of pair and using vector of pair for weighted children

#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<pair<int, int>> *l;

public:
    Graph(int v)
    {
        V = v;
        l = new list<pair<int, int>>[V];
    }

    void addEdge(int i, int j, int w)
    {
        l[i].push_back({w, j});
        l[j].push_back({w, i});
    }
    // Logic
    int dijkstra(int src, int dest)
    {
        // data structure
        vector<int> dist(V, INT_MAX);
        set<pair<int, int>> s;

        // Initialise
        dist[src] = 0;
        s.insert({0, src});

        // logic

        while (!s.empty())
        {
            auto it = s.begin();
            int node = it->second;
            int distTillNow = it->first;
            s.erase(it); // pop

            // iterate over neighbours of that node
            for (auto nbrPair : l[node])
            {
                int nbr = nbrPair.second;
                int currEdge = nbrPair.first;
                if (distTillNow + currEdge < dist[nbr])
                {
                    // remove it from set to update the set
                    auto f = s.find({dist[nbr], nbr});
                    if (f != s.end())
                    {
                        s.erase(f);
                    }
                    dist[nbr] = distTillNow + currEdge;
                    s.insert({dist[nbr], nbr});
                }
            }
        }

        for (int i = 0; i < V; i++)
        {
            cout << "Node " << i << " Dist" << dist[i] << endl;
        }
        return dist[dest];
    }
};
int main()
{
    Graph g(5);
    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(0, 2, 4);
    g.addEdge(0, 3, 7);
    g.addEdge(3, 2, 2);
    g.addEdge(3, 4, 3);
    cout << g.dijkstra(0, 4);
    return 0;
}
