/* @ashutoshjv661 Ashutosh Jadhav */
#include<bits/stdc++.h>
using namespace std;
// recursive method
long long  fastexpo(long long  a,long long  n){
	if(n==0)return 1;
  else if (n==1 ) return a;
	else{
		long long  r=fastexpo(a,n/2);
		if(n%2==0){
			return r*r;
		}
		else return r*r*a;
	}
}
// recursive modular approach
long long  fastmodpower(long long  a,long long  n, long long  m){
  if(n==0)return 1;
  else{
    long long  r=fastmodpower(a,n/2,m);
    if(n%2==0){
      return (r*r)%m;
    }
    else return (((r%m)*(r%m))%m*a)%m;
  }
}

// this is using bitmasking 
long long  mpower(long long  x, long long  y, long long  p){
    long long  res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1){
            res = (res*x) % p;
        }
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

#define MOD 1000000007

// iterative method bitmasking only
long long  fast_exp(int base, int exp) {
    long long  res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res%MOD;
}

