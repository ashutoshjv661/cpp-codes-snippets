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
  ll t;
  ll n,x,s;
  cin>>t;
  ll ssum=0;
  assert(t>=1 && t<=100);
  while(t){
  	cin>>n;
  	assert(n>=2 && n<=100000);
  	cin>>x;
assert(x>=1 && x<=n);
	cin>>s;
  	assert(s<=10000 && s>=1);
  	ssum=ssum+s;
  	assert(ssum<=200000);
  ll match=x;
  for(int i=0;i<s;i++)
  {
  	ll a=0,b=0;
  	cin>>a;
  	cin>>b;
  	assert(a!=b && a>=1 && a<=n && b>=1 && b<=n);
  	if(match==a)
  		match=b;
  	else if(match==b)
  		match=a;
  }
cout<<match<<endl;
t--;
}

return 0;

}
