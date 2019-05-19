/* @ashutoshjv661 Ashutosh Jadhav */
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



vector <int> v[10];
int level[10];
bool vis[10]={false};

// FOR UNDIRECTED GRAPH 

void bfs(int s){
	queue<int> q;
	q.push(s);
	vis[s]=true;
	level[s]=0;
	cout<<s<<" level "<<level[s]<<endl;
	while(!q.empty()){
		int p=q.front();
		q.pop();
		for(int i=0;i<v[p].size();i++){
			if(vis[v[p][i]]==false){
				level[v[p][i]]=level[p]+1;
				q.push(v[p][i]);
				vis[v[p][i]]=true;
				cout<<v[p][i]<<" level "<<level[v[p][i]]<<endl;
			}
		}
	}
}
int main() 
{
	FIO;
 	ll edgecount;
 	cin>>edgecount;
 	while(edgecount--){
 		ll m,n;
 		cin>>m>>n;
 		v[m].push_back(n);
 	}
 	bfs(0);
	return 0;
}