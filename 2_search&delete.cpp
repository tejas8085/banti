#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
node *SearchBst(node *root, int key)
{

    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    if (root->data < key)
    {
        return SearchBst(root->right, key);

    }
    else if (root->data > key)
    {
        return SearchBst(root->left, key);

    }
}

int main()
{
    node*root = new node(5);
    

    return 0;
}