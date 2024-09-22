/* Count all Nodes in a Binary tree*/


#include<iostream>
using namespace std;


class Node{
public:
int data;
Node* left;
Node* right;
Node(int val){
    left = NULL;
    right= NULL;
    data = val;
}
};

int sumNodes(Node* root){
    if(root == NULL){
        return 0;
    }
return sumNodes(root->left)+ sumNodes(root->right) + root->data;
}

int countNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right) +1;
 
}

void indisplay(Node* root){
    if(root == NULL){
        return;
    }
    indisplay(root->left);
    cout<<root->data<<" ";
    indisplay(root->right);
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right= new Node(7);
    root->left->left->right = new Node(9);
    root->right->left->left = new Node(8);
    root->right->left->right = new Node(10);
  indisplay(root);
  cout<<endl;
  cout<<countNodes(root);
  cout<<endl;
  cout<<sumNodes(root);

return 0;
}