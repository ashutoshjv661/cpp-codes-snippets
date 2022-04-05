#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};
// Root is at level 0 ;
vector<int> printKthLevel(Node* root, int k){
    int level  =  0;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    vector<int> ans;
    while(!q.empty()){
        if(level==k){
            while(q.front()!=NULL){
                Node* temp = q.front();
                ans.push_back(temp->key);
                q.pop();
            }
            break;
        }
        Node* temp = q.front();
        if(temp == NULL){
            q.pop();
            if(!q.empty()){
                q.push(NULL);
                level++;
            }else{
                break;
            }
        }else{
            q.pop();
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
    }
   return ans;
}