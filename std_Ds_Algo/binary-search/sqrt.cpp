
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define what_is(x) cerr << #x << " is " << x << endl; 
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// Find the last number M that M*M <= x.
class Solution {
public:
    int mySqrt(int x) {
       int left = 0, right = x;
        int ans = -1;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if((long long) mid * mid <= x) {
                ans = mid;
                left = mid + 1; // we're looking for the last element satisfying the condition
            }
            else {
                right = mid - 1;
            }
        }
        return ans;
    }
};

int main() 
{
 Solution s;
 int ans = s.mySqrt(50);
 cout<<ans<<endl;
 return 0;
}