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