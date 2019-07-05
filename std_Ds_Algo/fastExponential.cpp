/* @ashutoshjv661 Ashutosh Jadhav */
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define OJ freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


ll fastexpo(ll a,ll n){
	if(n==0)return 1;
	else{
		ll r=fastexpo(a,n/2);
		if(n%2==0){
			return r*r;
		}
		else return r*r*a;
	}
}
int main() 
{
	FIO;
	OJ;
 	ll n,p;
 	cin>>n>>p;
 	cout<<fastexpo(n,p);




	return 0;
}