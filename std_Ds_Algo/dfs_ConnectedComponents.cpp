/* @ashutoshjv661 Ashutosh Jadhav */
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define OJ freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// for u
vector<int> adj[10];
bool visited[10]={false};

void dfs(int s){
	visited[s]=true;
	for(int i=0;i<adj[s].size();i++){
		if(visited[adj[s][i]]==false){
			dfs(adj[s][i]);
		}
	}
}

int main() 
{
	OJ;
	FIO;
 	ll nodes,edges,x,y,connectedcompotent=0;
 	cin>>nodes>>edges;
 	for(int i=0;i<edges;i++){
 		cin>>x>>y;
 		//UNDIRECTED GRAPH
 		adj[x].push_back(y);
 		adj[x].push_back(x);
 	}
 	// number of connected components
 	for(int i=0;i<nodes;i++){
 		if(visited[i]==false){
 			dfs(i);
 			connectedcompotent++;
 		}
 	}
 	cout<<" connectedcompotent "<<connectedcompotent<<"\n";
	return 0;
}