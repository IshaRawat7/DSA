/* Check if the BST is valid or not.*/

#include "bits/stdc++.h"
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//check for bst.
bool isBST(Node* root,Node* minall, Node* maxall){
    if(root == NULL){
        return true;
    }
  
  if(minall != NULL && root->data <= minall->data){
    return false;
  }
  if(maxall!= NULL && root->data >= maxall->data){
    return false;
  }
//Time complexity = O(n); n = number of nodes in a tree.

  bool leftValid = isBST(root->left,minall,root);
  bool rightValid = isBST(root->right,root,maxall);
  return leftValid && rightValid;

}

int32_t main(){
Node* root = new Node(6);
root->left = new Node(4);
root->left->right = new Node(5);
root->left->left = new Node(3);
root->right = new Node(8);
root->right->left = new Node(7);
root->right->right = new Node(9);

//inorder(root);
if(isBST(root,NULL,NULL)){
    cout<<"Valid BST! "<<endl;
}
else{
    cout<<"Invalid BST!" <<endl;
}
return 0;
}