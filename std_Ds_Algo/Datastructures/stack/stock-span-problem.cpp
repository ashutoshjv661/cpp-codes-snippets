/*******************************************
 * @ashutoshjv661
 * Follow me on instagram/facebook/twitter  
             {´◕ ◡ ◕｀}
 *******************************************/
/*
he stock span problem is a financial problem where we have a series of n daily price 
quotes for a stock and we need to calculate the span of stock’s price for all n days. 

The span Si of the stock’s price on a given day i is defined as the maximum number of
 consecutive days just before the given day, for which the price of the stock on the 
 current
  day is less than or equal to its price on the given day.
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85},
 then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.

Input:
The first line of input contains an integer T denoting the number of test cases. The first
 line of each test case is N, N is the size of the array. The second line of each test case contains 
 N input C[i].

Output:
For each testcase, print the span values for all days.

*/
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
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  ll t;
  cin>>t;
  while(t--){
      ll n;
      cin>>n;
      ll ar[n];
      for(ll i=0;i<n;i++)cin>>ar[i];
      stack<ll> s;
      s.push(0);
      cout<<"1"<<" "; 
      for(ll i=1;i<n;i++){
          if(s.empty()==false and ar[s.top()]<=ar[i]){
              while(ar[s.top()]<=ar[i]){
                  s.pop();
                  if(s.empty())break;
              }
            }
          if(!s.empty())cout<<i-s.top()<<" ";
          else cout<<i+1<<" ";
          s.push(i);
      }
      cout<<endl;
  }
return 0;
}