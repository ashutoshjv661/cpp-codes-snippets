#include<bits/stdc++.h>
using namespace std;
 vector<int> findPrimes(int* p, int n){
     p[0]=p[1]=0;
     p[2]=1;
     for(int i=3;i<=n;i+=2){
         p[i]=1;
     }
     for(int i=3;i*i<=n;i+=2){
         if(p[i]){
             for(int j=i*i;j<=n;j+=(2*i)){
                 p[j]=0;
             }
         }
     }
     vector<int> res;
     res.push_back(2);
     for(int i=3;i<=n;i++){
         if(p[i]){
             res.push_back(i);
            }
        }
     return res;
 }
 vector<int> factorise(int m, vector<int>& primes){
     vector<int> fact ;
     fact.clear();
     int i=0;
     int p=primes[i];
     while(p*p<=m){
         if(m%p==0){
             fact.push_back(p);
             while(m%p==0){
                 m/=p;
             }
         }
         i++;
         p=primes[i];
       //  cout<<"p "<<p<<"\n";
     }
     if(m!=1){
         fact.push_back(m);
     }
     return fact;
 }
 int main(){
     int N = 1000000;
     int p[N];
     memset(p,0,sizeof(p));
     vector<int> primes = findPrimes(p,1000000);
    //  for(auto p:primes){
    //      cout<<p<<" ";
    //  }
        int m=36;
        //cin>>m;
        vector<int> factors = factorise(m,primes);
        for(auto f:factors){
            cout<<f<<"\n";
        }
 }