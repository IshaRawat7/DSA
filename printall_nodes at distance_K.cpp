/*print all nodes at distance k
       1
      / \
     5   2
    /   / \
   6   3   4
    \
     7
    / \
   8   9

Logic:
case1. Find the distance of all ancestors from target nodes.
case2. For all ancestors search other subtree nodes at (K-d).
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
        left = NULL;
    }
};

//case 1:
void printSubtreeNodes(Node* root , int k ){
    if(root == NULL || k<0){
        return;
    }
    if(k == 0){
        cout<< root->data<<" ";
        return;
    }
    printSubtreeNodes(root->left,k-1);
    printSubtreeNodes(root->right,k-1);
}

//case 2:
int printNodes(Node* root , Node* target , int k){
    if(root==NULL){
        return -1;
    }
    if(root == target){
        printSubtreeNodes(root,k);
        return 0;
    }
    int dl = printNodes(root->left,target,k);

    if(dl != -1){
      if(dl+1 == k){
        cout<<root->data<<" ";
      }
      else{
        printSubtreeNodes(root->right,k-dl-2);
      }
      return 1+dl;
    }

    int dr = printNodes(root->right,target,k);
    if(dr != -1){
      if(dr+1 == k){
        cout<<root->data<<" ";
      }
      else{
        printSubtreeNodes(root->left,k-dr-2);
      }
      return 1+dr;
    }
  
return -1;
}


void inorder_T(Node* root){
    if(root== NULL){
        return;
    }
    inorder_T(root->left);
    cout<<root->data<<" ";
    inorder_T(root->right);
}

int32_t main(){
Node* root = new Node(1);
root->left = new Node(5);
root->left->left = new Node(6);
root->left->left->right=new Node(7);
root->left->left->right->left = new Node(8);
root->left->left->right->right = new Node(9);
root->right = new Node(2);
root->right->left = new Node(3);
root->right->right = new Node(4);

cout<<"The Tree is: ";
inorder_T(root);
cout<<"The function execution is : ";
printNodes(root,root->left->left,2);
return 0;
}