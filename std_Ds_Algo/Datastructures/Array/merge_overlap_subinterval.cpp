/*******************************************
 * @ashutoshjv661
 * Follow me on instagram/facebook/twitter  
             {´◕ ◡ ◕｀}
 *******************************************/

 Practice : https://practice.geeksforgeeks.org/problems/overlapping-intervals/0

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
    ll n;
    cin>>n;
   vector<pair<ll,ll>> v;
   stack<pair<ll,ll>> st;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    st.push(v[0]);
    for(ll i=1;i<v.size();i++){
        
        if(v[i].first>=st.top().second and st.top().second==v[i].second){
            continue;
        }
        if(v[i].first>st.top().second){
            st.push(v[i]);
            continue;
        }
        if(v[i].second>st.top().second){
            st.top().second = v[i].second;
        }
    }
    vector<pair<ll,ll>> vp;
    while(!st.empty()){
        vp.push_back(st.top());
        st.pop();
    }
    sort(vp.begin(),vp.end());
    for(auto i:vp){
        cout<<i.first<<" "<<i.second<<" ";
    }
    cout<<endl;
}
return 0;
   
}