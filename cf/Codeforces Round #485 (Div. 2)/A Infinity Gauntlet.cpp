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

int collect[6];
string check[6];
string  colour[6]={"purple", "green", "blue", "orange", "red", "yellow"};
string gem[6]={"Power","Time","Space","Soul","Reality","Mind"};
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    clr(collect);
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
        cin>>check[i];
        for(int i=0;i<x;i++)
        for(int j=0;j<6;j++){
            if(check[i]==colour[j])
                collect[j]=1;
        }
          if(x==6)cout<<"0"<<"\n";
    else
        x=6-x;
        cout<<x<<"\n";
        for(int i=0;i<6;i++){
            if(collect[i]==0)
                cout<<gem[i]<<"\n";
        }

return 0;
}
