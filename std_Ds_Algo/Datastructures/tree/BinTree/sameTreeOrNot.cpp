#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
bool isIdentical(Node *r1, Node *r2)
{
    if (r1 == NULL and r2 == NULL)
    {
        return true;
    }
    if (r1 == NULL or r2 == NULL)
    {
        return false;
    }
    return (r1->data == r2->data and isIdentical(r1->left, r2->left) and isIdentical(r1->right, r2->right));
}