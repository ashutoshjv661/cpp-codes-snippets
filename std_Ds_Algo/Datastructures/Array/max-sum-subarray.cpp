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
// maximum sum subarray of k ;
// sliding window
int main()
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll sum=0;
        for(ll i=0;i<k;i++){
            sum+=v[i];
        }
        ll maximum=sum;
        for(ll i=1;i<n-k+1;i++){
            sum = sum-v[i-1]+v[i+k-1];
            maximum = max(sum,maximum);
        }
        cout<<maximum<<"\n";
    }
return 0;
   
}