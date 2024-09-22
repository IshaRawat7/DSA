/*Replace the value of each node with the sum of all subtree nodes and itself.*/
#include "bits/stdc++.h"
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data= val;
        left=NULL;
        right=NULL;
    }
};

void display(Node* root){
    if(root == NULL){
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}


void sumReplace(Node* root){

    if(root == NULL){
        return;
    }
  sumReplace(root->left); // Time Complexity = O(n);
  sumReplace(root->right);
  if(root->left != NULL){
    root->data += root->left->data;
  }
  if(root->right != NULL){
    root->data += root->right->data;
  }
}
int32_t main(){
Node* root= new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->left->left = new Node(4);
root->left->right = new Node(5);
cout<<"The tree is : "<<endl;
display(root);
cout<<endl;
cout<<"after sum replace we have"<<endl;
sumReplace(root);
display(root);


return 0;
}
