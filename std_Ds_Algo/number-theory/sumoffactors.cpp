//find all prime factors of n
// p1,p2,p3 find sum till all powers of individual prime factors
// multiply all the individual answers to get sum 

// Formula based CPP program to 
// find sum of all divisors of n. 
#include <bits/stdc++.h> 
using namespace std; 

// Returns sum of all factors of n. 
int sumofFactors(int n) 
{ 
	// Traversing through all prime factors. 
	int res = 1; 
	for (int i = 2; i <= sqrt(n); i++) 
	{ 
		int curr_sum = 1; 
		int curr_term = 1; 
		while (n % i == 0) { 
			// THE BELOW STATEMENT MAKES 
			// IT BETTER THAN ABOVE METHOD 
			// AS WE REDUCE VALUE OF n. 
			n = n / i; 
			curr_term *= i; 
			curr_sum += curr_term; 
		} 
		res *= curr_sum; 
	} 
	// This condition is to handle 
	// the case when n is a prime 
	// number greater than 2. 
	if (n >= 2) 
		res *= (1 + n); 

	return res; 
} 

// Driver code 
int main() 
{ 
	int n = 30; 
	cout << sumofFactors(n); 
	return 0; 
} 

/*_____________________________________________________________________________________________________________________*/
/*
 * @ashutoshjv661
 * Follow me on instagram/facebook/twitter  
             {´◕ ◡ ◕｀}
 *******************************************/

#include<bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
typedef pair< int ,int > pii;
#define ll long long
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);


ll ans(ll n){
    ll cnt=0;
    ll result=0;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            if((n/i)==i){
                result+=i;
            }
            else{
                result+=(i+n/i);
            }
            
        }
    }
    return (result+n+1);
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<ans(n)<<endl;
        
    }



return 0;
   
}


