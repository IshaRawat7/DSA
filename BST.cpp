/*Binary Search Tree*/
/*Left subtree is less than rootnode recursively . Right subtree is greater than root node recursively*/

#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *left = NULL;
    Node *right = NULL;
    Node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

Node *insertValues(Node *root, int val)
{
    Node *node = new Node(val);

    if (root == NULL)
    {
        return node;
    }

    if (val < root->data)
    {
        root->left = insertValues(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = insertValues(root->right, val);
    }
    return root;
}

void inorderT(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderT(root->left);
    cout << root->data << " ";
    inorderT(root->right);
}

void preorderT(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorderT(root->left);
    preorderT(root->right);
}
void postorderT(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorderT(root->left);
    postorderT(root->right);
    cout << root->data << " ";
}

int32_t main()
{
    Node *root = NULL;
    /*root = insertValues(root, 5);
    root = insertValues(root, 2);
    root = insertValues(root, 3);
    root = insertValues(root, 4);
    root = insertValues(root, 6);
    root = insertValues(root, 7);
    root = insertValues(root, 8);
    root = insertValues(root, 1); */
     int n;
     cout<<"Enter Number of elements to be inserted in Tree: ";
     cin>>n;
    while(n--){
        int x;
        cout<<"enter values to be inserted in BST: ";
        cin>>x;
        root = insertValues(root,x);
    }
    cout << "The Binary Search Tree looks like: ";
    inorderT(root);
    return 0;
}