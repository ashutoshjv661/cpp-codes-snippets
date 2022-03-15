#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

// printing level order traversal in reverse
struct Node
{
    int data;
    Node *left;
    Node *right;
};
void reversePrint(Node *root)
{
    stack<Node *> n;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *d = q.front();
        n.push(d);
        q.pop();
        if (d->right)
        {
            q.push(d->right);
        }
        if (d->left)
        {
            q.push(d->left);
        }
    }
    while (!n.empty())
    {
        Node *k = n.top();
        cout << k->data << " ";
        n.pop();
    }
}