//Ashutosh Jadhav @ashutoshjv661
#include<bits/stdc++.h>
using namespace std;
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define sd(mark) scanf("%d",&mark)
#define ss(mark) scanf("%s",&mark)
#define sl(mark) scanf("%lld",&mark)
#define debug(mark) printf("check%d\n",mark)
#define clr(mark) memset(mark,0,sizeof(mark))
#define ll long long

int main()
{
   ll sum=0;
   for(int i=1;i<1000;i++)
   {
       if(i%3==0 || i%5==0 )
        sum+=i;
   }
   debug(sum);
}

