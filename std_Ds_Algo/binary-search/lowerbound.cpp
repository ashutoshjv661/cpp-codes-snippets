#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define what_is(x) cerr << #x << " is " << x << endl; 
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int lower(int ar[],int n,int k){
    int low = 0,high = n-1;
    int ans = -1; //initially let ans = -1 
    while(low<=high){ 
       int mid = low+(high-low)/2;
        if(ar[mid]>=k){ // if mid matches k we still go to left(better answer to left- lowerbound) to find
            ans = ar[mid]; //override ans
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int main() 
{
    int n = 7;
    int k = 1;
    int ar[]={2,3,5,6,8,10,12};
    sort(ar,ar+n);
    cout<<lower(ar,n,k);
return 0;
   
}