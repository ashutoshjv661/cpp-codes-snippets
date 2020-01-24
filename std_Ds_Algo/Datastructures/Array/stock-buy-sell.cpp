/*******************************************
 * @ashutoshjv661
 * Follow me on instagram/facebook/twitter  
             {´◕ ◡ ◕｀}
 *******************************************/

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

// local minima and maxima 
// stock buy and sell problem 
int main()
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  ll t;
  cin>>t;
  while(t--){
      ll n;
      cin>>n;
      vector<ll> v(n);
      for(ll i=0;i<n;i++){
          cin>>v[i];
      }
      int minima=0,minflag=0;
      int maxima=0;
      int profit=0;
      for(int i=0;i<n;i++){
          if(minflag==0){
              if(i==0){
                  if(v[i]<v[i+1]){
                      minima = i;
                      minflag=1;
                  }
              }
              else if(v[i]<v[i-1] and v[i]<v[i+1]){
                  minima = i;
                  minflag = 1;
              }
          }
          else if(minflag==1){
              if(i==n-1){
                  if(v[i]>v[i-1]){
                      maxima = i;
                      cout<<"("<<minima<<" "<<maxima<<") ";
                      profit++;
                      minflag=0;
                  }
              }
              else if(v[i]>v[i-1] and v[i]>v[i+1]){
                  maxima = i;
                  cout<<"("<<minima<<" "<<maxima<<") ";
                      minflag=0;
                      profit++;
              }
          }
      }
      if(profit==0)cout<<"No Profit";
      cout<<endl;
  }
return 0;
}