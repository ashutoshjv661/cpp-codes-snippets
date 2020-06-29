/*******************************************
 * @ashutoshjv661
 *******************************************/


/* Question is here 
https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t;
  cin>>t;
  while(t--){
      ll n;
      cin>>n;
      vector<ll> v(n);
      for(ll i=0;i<n;i++){
          cin>>v[i];
      }
      ll cur,glo;
      cur = glo = v[0];
      for(ll i=1;i<n;i++){
          cur = max(v[i],cur+v[i]);
          if(cur > glo){
              glo = cur ;
          }
      }
      cout<<glo<<"\n";
  }
return 0;
}