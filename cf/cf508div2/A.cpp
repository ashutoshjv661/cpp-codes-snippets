/*******************************************
 * Ashutosh Jadhav 
 * @ashutoshjv661
 * Follow me on instagram/facebook/twitter 
 *                
             {´◕ ◡ ◕｀}
 *******************************************/

#include<bits/stdc++.h>
using namespace std;
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl '\n'
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ll long long
#define dd double
#define MOD 1000000007
#define sd(mark) scanf("%d",&mark)
#define ss(mark) scanf("%s",&mark)
#define sl(mark) scanf("%lld",&mark)
#define debug(mark) printf("check%d\n",mark)
#define clr(mark) memset(mark,0,sizeof(mark))
#define rep(i, n) for(int i = 0; i < n; i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
int k;
char alpha[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
string s;
int checker[27];
clr(checker);
cin>>n;
cin>>k;
cin>>s;
int min;
for(int i=0;i<k;i++)
{
	for(int j=0;j<s.length();j++)
	{
		if(alpha[i]==s[j]){
			checker[i]++;
		}
	}
}

for(int i=0;i<k;i++)
{
		if(checker[i]==0)
		{
			cout<<"0"<<'\n';
			exit(0);
		}

}
min=checker[0];
for(int i=1;i<k;i++)
{
			if(min>checker[i])
				min=checker[i];
}
int result=min*k;
cout<<result<<'\n';

return 0;
   
}