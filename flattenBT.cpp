/*Flatten a binary tree.
Given a binary tree, flatten it into linked list in place.After flattering,left of each node should point to NULL and right should contain next node in preorder sequence.(It's not allowed to use other data structure).
*/
/*
1.Recursively flatten the left and right subtrees.
2.store left tail and right tail.
3.Store right subtree in 'temp' & make left subtree as right subtree.
4. Join right subtree with left tail.
5.Return right tail.
*/


#include"bits/stdc++.h"
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data= val;
        left = NULL;
        right = NULL;
    }
};
void flatten(Node* root){
    if(root == NULL || root->left == NULL && root->right == NULL){
        return;
    }
    if(root->left != NULL){
        flatten(root->left);

        Node* temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node* t = root->right;
        while(t->right != NULL){
            t = t->right;
        }

        t->right = temp;
    }

    flatten(root->right);
}

void inorder_T(Node* root){
    if(root ==  NULL){
        return;
    }
    inorder_T(root->left);
    cout<<root->data<<" ";
    inorder_T(root->right);
}

void preorder_T(Node* root){
    if(root ==  NULL){
        return;
    }
     cout<<root->data<<" ";
    inorder_T(root->left);
    inorder_T(root->right);
}

void postorder_T(Node* root){
    if(root ==  NULL){
        return;
    }
    inorder_T(root->left);
    inorder_T(root->right);
    cout<<root->data<<" ";
}



int32_t main(){
Node* root = new Node(1);
root->left = new Node(2);
root->left->left = new Node(3);
root->left->right = new Node(4);
root->right = new Node(5);
root->right->left = new Node(6);

cout<<"The inorder traversal is : "<<"\n";
inorder_T(root);
cout<<"\n";
cout<<"The preorder traversal is : "<<"\n";
preorder_T(root);
cout<<endl;
cout<<"The postorder traversal is : "<<"\n";
postorder_T(root);
cout<<endl;
flatten(root);
cout<<"The inorder Traversal after : "<<"\n";
inorder_T(root);
return 0;
}