#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};

// minimum value in a BST
// your task is to complete the below function
int minValue(Node* root)
{
    if(root->left== NULL)return root->data;
    else 
     minValue(root->left);
}
