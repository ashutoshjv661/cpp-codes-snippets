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
 

