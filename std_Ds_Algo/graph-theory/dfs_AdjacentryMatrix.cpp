/* @ashutoshjv661 Ashutosh Jadhav */
#include<bits/stdc++.h>
using namespace std;

/*
*
*  DFS USING ADJACENCY MATRIX USING C++ DYNAMIC ARRAYS 
*
*/
#define endl "\n"
#define ll long long
#define OJ freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


void dfs(int** edges,int v,int sv,bool* visited){
    cout<<sv<<" ";//source vertex
    visited[sv]=true;
    for(ll i=0;i<v;i++){
        if(i==sv)continue; // no self loop
        if(edges[sv][i]==1)
        if(!visited[i])
            dfs(edges,v,i,visited);
    }
}
int main() 
{
    FIO
    OJ
     int v;
     int e;
     cin>>v;
     cin>>e;
     int** edges= new int*[v];
     for(ll i=0;i<v;i++){
        edges[i]=new int[v];
        for(ll j=0;j<v;j++){
            edges[i][j]=0;
        }
     }
     for(ll i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
     }
     bool* visited=new bool[v];
     for(ll i=0;i<v;i++)visited[i]=false;
     dfs(edges,v,0,visited);
    delete [] *edges;
    delete [] visited;
    visited=NULL;
    edges=NULL;
    return 0;
}