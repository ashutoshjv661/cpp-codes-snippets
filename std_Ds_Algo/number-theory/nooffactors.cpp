#include<bits/stdc++.h>
using namespace std;

int main() {
int t, v, prec = 0;;
scanf("%d", &t);
	while(t--){
		int nd = 0;
		scanf("%d", &v);
		for(int i = 1; i * i <= v ; i++)
		if(v % i == 0){
		nd+= 2;
		if(i * i == v)
		nd--;
		}
		printf("%d\n", nd);
	}
return 0;
}


// Using prime factorization
int noifdivisors(int m , vector<int>& primes) // assume we are sending some primes
{
	int cnt = 0;
	int ans = 1;
	int i = 0 ;
	int p = primes[i];
	while(p*p<=m){
		cnt=0;
		if(m%p==0){
			while(m%p==0){
				cnt++;
				m/=p;
			}
			ans=ans*(cnt+1);
		}
		i++;
		p = primes[i];
	}
	if(m!=1){
		ans*=2;
	}
	return ans;
}