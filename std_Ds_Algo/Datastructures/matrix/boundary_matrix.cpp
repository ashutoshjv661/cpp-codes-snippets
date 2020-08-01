/*******************************************
 * @ashutoshjv661
 * Follow me on instagram/facebook/twitter  
             {´◕ ◡ ◕｀}
 *******************************************/
// printing boundary elements 
#include<bits/stdc++.h>
using namespace std;
#define S second
#define ll long long
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main()
{
    OJ;
    FIO;
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n][n];
        for(ll i=0;i<n;i++{
        for(ll j=0;j<n;j++){
            cin>>ar[i][j];
        }
        }
        for(ll i=0;i<n;i++){
            cout<<ar[0][i]<<" ";
        }
        for(ll i=1;i<n;i++){
            cout<<a[i][n-1]<<" ";
        }
        for(ll i=n-2;i>=0;i--){
            cout<<ar[n-1][i]<<" ";
        }
        for(ll i=n-2;i>=1;i--){
            cout<<ar[i][0]<<" ";
        }
        cout<<endl;
    }



return 0;
   
}