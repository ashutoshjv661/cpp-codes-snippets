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
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ll long long
#define MOD 1000000007
#define clr(mark) memset(mark,0,sizeof(mark))
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int *arr[100000];
  int k;
  ll n;
  cin>>n;
  ll q;
  cin>>q;
  int tempi,temp2;
int j=0;
  for(int i=0;i<n;i++)
  	{
  		cin>>k;
  		arr[i]=(int*)malloc(k*sizeof(int));
  		for(int w=0;w<k;w++)
  		{
  			cin>>arr[i][w];
  		}
  	}
for(int i=0;i<q;i++){
	cin>>tempi>>temp2;
	cout<<arr[tempi][temp2]<<"\n";
}
return 0;
   
}
