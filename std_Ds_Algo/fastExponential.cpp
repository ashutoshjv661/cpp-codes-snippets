/* @ashutoshjv661 Ashutosh Jadhav */


ll fastexpo(ll a,ll n){
	if(n==0)return 1;
	else{
		ll r=fastexpo(a,n/2);
		if(n%2==0){
			return r*r;
		}
		else return r*r*a;
	}
}

ll fastmodpower(ll a,ll n, ll m){
  if(n==0)return 1;
  else{
    ll r=fastmodpower(a,n/2,m);
    if(n%2==0){
      return (r*r)%m;
    }
    else return (r*r*a)%m;
  }
}

ll power(ll x, ll y){
    ll res = 1;
    while (y > 0){
        if (y & 1)
            res = res*x;
        y = y>>1;
        x = x*x;
    }
    return res;
}
 


ll power(ll x,ll y,ll p)
{
  ll res=1;
  x=x%p;
  while(y>0)
  {
    if(y&1)
      res=(res*x)%p;
    y=y>>1;
    x=(x*x)%p;
  }
  return res;
}

ll mpower(ll x, ll y, ll p){
    ll res = 1;
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

// iterative method
ll fast_exp(int base, int exp) {
    ll res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res%MOD;
}