/*
example
given 
1 2 3
4 5 6
7 8 9

print 1 2 3 6 5 4 7 8 9
snake pattern
*/

/*******************************************
 * @ashutoshjv661
 * Follow me on instagram/facebook/twitter  
             {´◕ ◡ ◕｀}
 *******************************************/

#include<bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define ll long long
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
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
            if(i%2==0){
                for(ll j=0;j<n;j++){
                    cout<<ar[i][j]<<" ";
                }
            }
            else{
                for(ll j=n-1;j>=0;j--){
                    cout<<ar[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
return 0;
}