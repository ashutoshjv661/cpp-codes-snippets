//Ashutosh Jadhav @ashutoshjv661
#include<bits/stdc++.h>
using namespace std;
#define sd(mark) scanf("%d",&mark)
#define ss(mark) scanf("%s",&mark)
#define sl(mark) scanf("%lld",&mark)
#define debug(mark) printf("check%d\n",mark)
#define clr(mark) memset(mark,0,sizeof(mark))
#define MOD 1000000007
#define ll long long

ll int expo(ll int  a,ll int b){
	ll int result =1;
	while(b>0){
		if(b%2==1)
        result=(result*a)%MOD;
		a=(a*a)%MOD;
		b=b/2;
	}
	return result;
}
int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
	long long int x,y,res1,res2;
	cin>>x;
	cin>>y;
	res1=expo(x,y);
	res2=expo(y,x);
	if(res1<res2)
        cout<<"<"<<"\n";
	else if(res1>res2)
	cout<<">"<<"\n";
	else
	cout<<"="<<"\n";
	return 0;
}
