/*
Segmented Sieve 
When you need to find large prime numbers which are of the range 10^6 and more because 
we cannot create a sieve of that size so we see that at least the difference between the 
two big numbers is less than 10^6
so that we can create a array of 10^6 and use segmented sieve
*/

#include<bits/stdc++.h>
using namespace std;
// Coding ninjas solution

#define MAX 100001 //assumed max value of root R

vector<int>sieve(){
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
void printPrimes(long long l,long long r,vector<int>& primes){
    bool isPrime[r-l+1];
    // 0th index lth index ---- nth index is rth index 
    for(int i=0;i<=r-l;i++){
        isPrime[i]=true;
    }
    // n/i+i is actually floor() of n/i
    for(int i=0;primes[i]*(long long )primes[i]<=r;i++){
        int currPrime=primes[i];
        // just smaller of equal to r
        long long base = (l/(currPrime))*(currPrime);
        if(base<l){
            base=base+currPrime;
        }
        // Mark all multiples within L to R as false 
        for(long long j=base;j<=r;j+=currPrime){
            isPrime[j-l]=false;
        }
        // There may be a case where base is itself prime because base evaluated as 0
        if(base==currPrime){
            isPrime[base-l] = true ;
        }
    }
    for(int i=0;i<=r-l;i++){
        if(isPrime[i]== true){
            cout<< i + l ;
        }
    }
}
int main(){
    vector<int> primes = sieve();
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        printPrimes(l,r,primes);
    }
}
















// the above logic is little difficult so below one is good ^__^
// I understood the above one it is quite simple follow both 
// coding blocks solution 

#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int p[1000001];

void prime(){
    fill(p,p+1000001,1);
    for(int i=2;i*i<=1000000;i++){
        for(int j=2*i;j<=1000000;j+=i)
        p[j]=0;
    }
}

void calculate_ans(int a,ll b){
    
    int pp[b-a+1];
    fill(pp,pp+b-a+1,1); // start end fill_value 
    
    for(int i=2;i*i<=b;i++){   // because we can find all factors before sqrt of b 
        if(p[i]){
            for(int j=a;j<=b;j++){
                if(j%i==0   && j!=i){  // j!=i because if j==i overlap then we will loose that prime 
                    pp[j-a]=0; // because we hace relative indexing therefore j-a =0;
                }
            }
        }
    }
    if(a!=1) // to check we are not starting from 1 
    for(ll i=a;i<=b;i++){
        if(pp[i-a]){
            cout<<i<<endl;
        }
    }
    else{
        for(ll i=2;i<=b;i++){
        if(pp[i-a]){
            cout<<i<<endl;
        }
    }
    }
    cout<<endl;

}


int main() {
    int t;
    cin>>t;
    prime();
    while(t--){
        int n;
        cin>>n;
        ll m;
        cin>>m;
        calculate_ans(n,m);
    }
}
