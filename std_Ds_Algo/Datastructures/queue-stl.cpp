#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(12);
    q.push(14);
    q.push(12);
    queue<int> t;
    t=q;
    while(!t.empty()){
        cout<<t.front()<<" ";
        t.pop();
    }
    q.emplace(42);//emplace works the same as push to back . more efficient 
    cout<<"\n"<<q.back()<<"\n";//printing the back element 
    t.swap(q);// swapping elements of two queues even when they have a different sizes 
    while(!t.empty()){
        cout<<t.front()<<" ";
        t.pop();     
    }
    cout<<t.size();
}