#include<bits/stdc++.h>
using namespace std;
int status=0;
int prime(int x)
{
    status=0;
    int i=0;
    for(i=2;i<x;i++){
        if(x%i==0)
            return 0;
    }
    return 1;
    
}
int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    int i,t,low,high;
    cin>>t;
    while(t>0){
    cin>>low;
    cin>>high;
        {
            for(i=low+1;i<high;i++){
                if(prime(i)==1){
                    cout<<i<<" ";
                }
            }

        }
        t--;
    }
    return 0;
}

