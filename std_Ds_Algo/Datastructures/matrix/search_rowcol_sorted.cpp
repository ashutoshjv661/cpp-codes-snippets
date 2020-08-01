/*******************************************
 * @ashutoshjv661
 * Follow me on instagram/facebook/twitter  
             {´◕ ◡ ◕｀}
 *******************************************/
/*
Given a matrix mat[] of size n x m, where every row and column is sorted in increasing order, 
and a number x is given. The task is to find whether element x is present in the matrix or not.
Expected Time Complexity : O(m + n)
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n>>m;
        ll ar[n][m];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>ar[i][j];
            }
        }
        cin>>k;
        ll i=0,j=m-1; // start from top right element
        ll flag=0;
        while(i<=n-1 and j>=0){ // while you are within bottom and left
            if(ar[i][j]==k){
                flag=1; // if it is found make flag 1 and break
                break;
            }
            else if(ar[i][j]>k){
                j--;  // if it is greater go to left
                continue;
            }
            else if(ar[i][j]<k){
                i++; // else go down
                continue;
            }
        }
        if(flag)cout<<"1\n";
        else cout<<"0\n";
    }
return 0;
}