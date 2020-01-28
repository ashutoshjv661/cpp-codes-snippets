#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

struct Node
{
    int data;
    Node* left;
    Node* right;
}; 
// if a tree has given sum till the leaf of the tree 
bool hasPathSum(Node *root, int sum)
{
    if(root == NULL ) return false ;
    if(root->left == NULL and root->right == NULL ){
        if(root->data == sum )return true;
        else return false;
    }
    if(hasPathSum(root->left,sum-root->data)) return true;
    if(hasPathSum(root->right,sum-root->data)) return true;
    return false;
}