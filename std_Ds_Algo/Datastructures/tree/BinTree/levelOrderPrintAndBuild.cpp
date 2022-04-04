#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
    int data;
    Node* right;
    Node* left;
    Node(int data){
        this->data = data;
        right = left = NULL;
    }
};
    Node* levelOrderBuild(){
        int d;
        cin>>d;
        Node *root = new Node(d);
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* n = q.front();
            q.pop();
            cin>>d;
            if(d!=(-1)){
                Node* temp = new Node(d);
                n->left = temp;
                q.push(temp);
            }
            cin>>d;
            if(d!=(-1)){
                Node* temp = new Node(d);
                n->right = temp;
                q.push(temp);
            }
        }
        return root;
    }

    void levelOrderPrint(Node* root){
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            Node* temp = q.front();
            
            if(temp == NULL){
                cout<<endl;
                q.pop();
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                cout<<temp->data<<" ";
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
        }
        return ;

    }
int main(){
    // Giving input 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1
    Node * root = levelOrderBuild();
    levelOrderPrint(root);
}
