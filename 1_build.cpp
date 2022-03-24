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

node *InsertBst(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }
    if (val < root->data)
    {
        root->left = InsertBst(root->left, val);
    }
   else
    {
        root->right = InsertBst(root->right, val);
    }
    return root;
}
void Inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

int main()
{
    node *root = NULL;
    root = InsertBst(root, 5);
    InsertBst(root, 1);
    InsertBst(root, 3);
    InsertBst(root, 4);
    InsertBst(root, 2);
    InsertBst(root, 7);

    Inorder(root);

    return 0;
}