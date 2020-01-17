#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define OJ \
	freopen("input.txt", "r", stdin); \
	freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int findMin(int a[],int n){
	int res=a[0];
	for(int i=1;i<n;i++){
		res = min(res,a[i]);
	}
	return res;
}
int findMinLib(int a[],int n){
	return *min_element(a,a+n);
}
int findMinRecursive(int a[],int n){
	// checking first element and finding minimum from remaining elements in array.
	return (n==1)?a[0]:min(a[0],findMinRecursive(a+1,n-1));
}
int main() 
{
	FIO;
	OJ;
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	cout<<findMin(a,n)<<endl;
	cout<<findMinLib(a,n)<<endl;
	cout<<findMinRecursive(a,n)<<endl;
return 0;
   
}