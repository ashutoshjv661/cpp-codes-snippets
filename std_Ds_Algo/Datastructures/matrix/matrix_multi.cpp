//it takes O(n^3) for matrix multiplication
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define what_is(x) cerr << #x << " is " << x << endl; 
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    OJ;
    int n1,m1,n2,m2;
    cin>>n1>>m1>>n2>>m2;
    int mat1[n1][m1],mat2[n2][m2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cin>>mat1[i][j];
        }
    }
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++){
            cin>>mat2[i][j];
        }
    }
    if(m1!=n2){
        cout<<"Not possible\n";
        return 0;
    }
    int ans[n1][m2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            ans[i][j]=0;
            for(int k=0;k<m1;k++){
                ans[i][j]+=(mat1[i][k]*mat2[k][j]);
            }
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}