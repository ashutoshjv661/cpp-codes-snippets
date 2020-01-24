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
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 // OJ;
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll leftmax[n],rightmax[n];
        leftmax[0]=v[0];
        for(ll i=1;i<n;i++){
            leftmax[i]=max(leftmax[i-1],v[i]);
            cout<<leftmax[i]<<" ";
        }
        cout<<endl;
        rightmax[n-1]=v[n-1];
            for(ll i=n-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],v[i]);
            cout<<rightmax[i]<<" ";
        }
        cout<<endl;
        ll sum=0;
        for(ll i=0;i<n;i++){
            if(i==0){
                continue;
            }
            if(i==n-1){
                break;
            }
            ll x = min(leftmax[i-1],rightmax[i+1])-v[i];
            if(x<=0)continue;
            else sum+=x;
        }
        cout<<sum<<endl;
    }
return 0;
   
}