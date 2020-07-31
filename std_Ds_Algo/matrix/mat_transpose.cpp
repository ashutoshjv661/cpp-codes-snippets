/*******************************************
 * @ashutoshjv661
 * Follow me on instagram/facebook/twitter  
             {´◕ ◡ ◕｀}
 *******************************************/
// transpose of a matrix 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ar[n][n];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                cin>>ar[i][j];
            }
        }
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                swap(ar[i][j],ar[j][i]);
            }
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                cout<<ar[i][j]<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}