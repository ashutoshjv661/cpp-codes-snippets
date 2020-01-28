#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
struct Node{
    int data;
    Node* left;
    Node* right;
};
int bsize(Node* root){
    if(root == NULL) return 0;
    int left = bsize(root->left);
    int right = bsize(root->right);
    return 1 + left + right ;
}