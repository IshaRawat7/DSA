/*Zig Zag Traversal in Binary search tree.*/
/*STrategy
1. Use 2 stacks - currentLevel and nextLevel
2.Variable LeftToRight
3. if LeftToRight, push left child then right else, push right child.
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
        left = NULL;
        right =NULL;
    }
};


Node* insertBST(Node* root,int val){
    Node* node = new Node(val);
    if(root == NULL){
        return node;
    }
    if(val < root->data){
        root->left = insertBST(root->left,val);
    }
    if(val >root->data){
        root->right = insertBST(root->right,val);
    }
    return root;
}

void zig_zagT(Node* root){
    if(root == NULL){
        return;
    }
stack<Node*> currentL;
stack<Node*> nextL;

bool LeftTRight = true;

currentL.push(root);
while(!currentL.empty()){
    Node* temp = currentL.top();
    currentL.pop();

    if(temp){
        cout<<temp->data<<" ";
    

    if(LeftTRight){
        if(temp->left){
            nextL.push(temp->left);
        }
        if(temp->right){
            nextL.push(temp->right);
        }
    }

    //Right to Left
    else{
        if(temp->right){
            nextL.push(temp->right);
        }
        if(temp->left){
            nextL.push(temp->left);
        }
    }
    }
   if(currentL.empty()){
    LeftTRight = !LeftTRight;
    swap(currentL,nextL);
   }

}

}


void inorderT(Node* root){
    if(root == NULL){
        return;
    }
    inorderT(root->left);
    cout<<root->data<<" ";
    inorderT(root->right);
}
int32_t main(){
/*Node* root = NULL;
root = insertBST(root,7);
root = insertBST(root,4);
root = insertBST(root,3);
root = insertBST(root,2);
root = insertBST(root,6);
root = insertBST(root,8);
root = insertBST(root,9);
*/
Node* root = new Node(12);
root->left = new Node(9);
root->right = new Node(15);
root->left->left = new Node(5);
root->left->right = new Node(10);
cout<<"In Order Traversal of BST : ";
inorderT(root);
cout<<endl;

zig_zagT(root);
cout<<endl;
return 0;
}