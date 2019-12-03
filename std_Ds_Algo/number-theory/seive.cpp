#include<bits/stdc++.h>
using namespace std;
void prime_seive(int * p,int n){
    
    for(int i=3;i<=n;i+=2){
        p[i]=1;
    }
    p[0]=p[1]= 0;
    p[2]=1;
    // first optimisation is that iterate only over the odd numbers
    for(int i=3;i<=n;i+=2){
        if(p[i]){
            // 2nd optimisation is that we are starting from i^2 to check for next non-prime 
            for(int j=i*i;j<=n;j+=2*i){ // another optimisation is that we are doing j+= 2i because we are skipping even number 
            // odd + odd is even so we are doing odd + even every time 
                p[j]=0;
            }
        }
    }
    return ;
}
int main(){

    int N=1000000;
    int p[N];
    memset(p,0,sizeof(p));
    prime_seive(p,10);
}