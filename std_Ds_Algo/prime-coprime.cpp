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
 