/*Balanced Height in a Binary Tree.
For Each node, the difference between the heights of the left subtree & right subtree <=1 {-1,0,1}.
*/

#include "bits/stdc++.h"
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        right = NULL;
        left =NULL;
    }
};

int height(Node* root){

    if(root == NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh) + 1 ;
}

bool BalancedTree(Node* root){
if(root == NULL){
    return true;
}
if(BalancedTree(root->left) == false){
        return false;
}
if(BalancedTree(root->right) == false){
    return false;
}
int lh = height(root->left);
int rh = height(root->right);
if(abs(lh-rh) <= 1){
    return true;
}
else{
    return false;
}
}

void display(Node* root){
    if(root == NULL){
        return;
    }
    display(root->left);
    display(root->right);
    cout<<root->data<<" ";
}
int32_t main(){
Node* root = new Node(1);
root->left = new Node(2);
root->left->left = new Node(3);
root->left->right = new Node(4);
root->left->left->left = new Node(5);
root->right = new Node(6);
root->right->left = new Node(7);
cout<<"Tree is: "<<endl;
display(root);
cout<<endl;
cout<<"The tree is Balanced? ";
cout<<BalancedTree(root);

return 0;
}