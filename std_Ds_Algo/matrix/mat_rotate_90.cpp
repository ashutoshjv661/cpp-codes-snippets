/*******************************************
 * @ashutoshjv661
 * Follow me on instagram/facebook/twitter  
             {´◕ ◡ ◕｀}
 *******************************************/
// to rotate a matix i am printing last column to firsrt column as row 
// other important technique is to 
/* 1.Find transpose
    2. rotate the columns
*/ 
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
        for(ll j=n-1;j>=0;j--){
            for(ll i=0;i<n;i++){
                cout<<ar[i][j]<<" ";
            }
        }
        cout<<endl;
    }



return 0;
   
}