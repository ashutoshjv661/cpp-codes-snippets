// GCD OF WHOLE ARRAY ELEMENTS 
ll findGCD(ll arr[], ll n)
{
    ll result = arr[0];
    for (int i = 1; i < n; i++)
        result = __gcd(arr[i], result);
    return result;
}

// GCD OF TWO NUMBERS
ll gcd(ll a,ll b)
{
	if(!a)return b;
	else return gcd(b%a,a);
}

// oneliner gcd
ll gcd(ll a,b){
    return a?gcd(b%a,a):b;
}


// LCM of two numbers 
int lcm (int a, int b) {
    return a / gcd(a, b) * b;
}
