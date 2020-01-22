#include <bits/stdc++.h>
#include<iostream>
#include<string.h>
#include <cmath>
#include<algorithm>
#include <vector>
#include <stack>
#include <queue>
#define mod 1000000007
#define ll long long
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
    {
        ll n;
        cin>>n;
        ll a,i,c[n];
        memset(c,-1,sizeof(c));
        stack <pair <ll,int> >dq;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(dq.empty())
                dq.push(make_pair(a,i));
            else
            {
                while(!dq.empty())
                {
                    if(a>dq.top().first)
                    {
                        c[dq.top().second]=a;
                        dq.pop();
                        //dq.push_front(a);
                    }
                    else
                    {
                        //dq.push_front(a);
                        break;
                    }
                }
                dq.push(make_pair(a,i));
            }
        }
        for(i=0;i<n;i++)
            cout<<c[i]<<" ";
        cout<<endl;
    }
}

