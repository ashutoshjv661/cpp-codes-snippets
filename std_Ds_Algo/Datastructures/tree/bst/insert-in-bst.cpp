#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// insert in BST iterative 
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node (int data){
        data = data;
        left = NULL;
        right = NULL;
    }
};


Node* insert(Node* node, int data)
{
    Node* n = new Node(data);
    if(node == NULL ){
        return n;
    }
    Node* parent;
    Node* cur;
    cur = node;
    while(cur!=NULL){
        parent = cur;
        if(cur->data == data ){
            return node;
        }
        if(cur->data< data){
            cur = cur->right;
        }
        else cur = cur ->left;
    }
    if(parent->data < data){
        parent->right = n;
    }else{
        parent->left = n;
    }
    return node;
}