/*******************************************
 * @ashutoshjv661
 * Follow me on instagram/facebook/twitter  
             {´◕ ◡ ◕｀}
 *******************************************/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define MAX 10009
vector<int>getprimes(){
    bool isPrime[MAX];
    for(int i=0;i<MAX;i++)isPrime[i]=1;
    for(int i=2;i*i<MAX;i++){
        if(isPrime[i]){
            for(int j=i*i;j<MAX;j+=i){
                isPrime[j]=false;
            }
        }
    } 
    vector<int> primes;
    primes.push_back(2);
    for(int i=3;i<MAX;i+=2){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }
    return primes;
}
void ans(int m, vector<int>& primes){
     vector<pair<int,int>> fact ;
     fact.clear();
     int i=0;
     int p=primes[i];
     while(p*p<=m){
         int cnt=0;
         if(m%p==0){
             while(m%p==0){
                 cnt++;
                 m/=p;
             }
             fact.push_back(make_pair(p,cnt));
         }
         i++;
         p=primes[i];
     }
     if(m!=1){
         fact.push_back(make_pair(m,1));
     }
     for(auto i=fact.begin();i!=fact.end();i++){
         cout<<(*i).first<<" "<<(*i).second<<" ";
     }
 }
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         vector<int> primes = getprimes();
        ans(n,primes);
        cout<<endl;
    }
return 0;
}