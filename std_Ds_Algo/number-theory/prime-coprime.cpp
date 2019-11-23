ll isprime(ll N){
    if(N<2 || (!(N&1) && N!=2))
        return 0;
    for(int i=3; i<=sqrt(N); i+=2){
        if(!(N%i))
            return 0;
    }
    return 1;
}

bool coprime(ll a, ll b)
{
    return (__gcd(a, b) == 1);
}
 
//coding blocks code 
// Root N method
isprime(ll n){
    if(n==2)return 1;
    if(n==1 or n%2==0){
        return 0;
    }
    for(ll i=3;i*i<=n;i+=2){
        if(n%i==0)return 0;
    }
    return 1;
}
