#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int nthfromtheend(Linked ** head , int n){
    //two pointer method 
    Linked * mainptr = *head;
    Linked * refptr = * head;
    int temp = n;
    while(n--){
        refptr = refptr->next;
    }
    while(ref->next!=NULL){
        mainptr = mainptr->next;
        refptr = refptr->next;
    }
    return mainptr->data;
}