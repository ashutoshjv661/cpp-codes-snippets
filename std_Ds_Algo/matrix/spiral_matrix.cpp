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
        ll n,m;
        cin>>m>>n;
        ll ar[m][n];
        for(ll i=0;i<m;i++){
            for(ll j=0;j<n;j++){
                cin>>ar[i][j];
            }
        }
        ll dir=0;//direction
        // take four variables
        ll top=0,bottom=m-1,left=0,right=n-1;
        while(top<=bottom and left<=right){
            if(dir==0){
                for(ll i=left;i<=right;i++){
                    cout<<ar[top][i]<<" ";
                }
                top++;
                dir=1;
            }
            else if(dir==1){
                for(ll i=top;i<=bottom;i++){
                    cout<<ar[i][right]<<" ";
                }
                right--;
                dir=2;
            }
            else if(dir==2){
                for(ll i=right;i>=left;i--){
                    cout<<ar[bottom][i]<<" ";
                }
                bottom--;
                dir=3;
            }
            else if(dir==3){
                for(ll i=bottom;i>=top;i--){
                    cout<<ar[i][left]<<" ";
                }
                left++;
                dir=0;
            }
            
        }
        cout<<endl;
    }

return 0;
   
}