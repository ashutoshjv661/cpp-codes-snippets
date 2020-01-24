
/*Given an array of positive integers. Your task is to find the leaders in the array.

Note: An element of array is leader if it is greater than or equal to all the elements to its 
right side. Also, the rightmost element is always a leader. 

Input:
The first line of input contains an integer T denoting the number of test cases. 
The description of T test cases follows.
The first line of each test case contains a single integer N denoting the
 size of array.
The second line contains N space-separated integers A1, A2, ..., AN denoting
 the elements of the array.*/
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


// leader in an array 
int main()
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        stack<ll> s;
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll max = v[n-1];
        s.push(max);
        for(ll i=n-2;i>=0;i--){
            if(v[i]>=max){
                max = v[i];
                s.push(max);
            }
        }
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
    }



return 0;
   
}