/*Left View of a Binary Tree*/

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

void leftV(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i =1;i<=n;i++){
            Node* curr = q.front();
            q.pop();
            if(i == 1){
                cout<<curr->data<<" ";
            }

            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }
}

void display(Node* root){
    if(root == NULL){
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
int32_t main(){
Node* root = new Node(1);
root->left = new Node(2);
root->left->left = new Node(3);
root->left->right = new Node(4);
root->right = new Node(5);
root->right->left = new Node(6);
root->left->left= new Node(7);

cout<<"The Tree is : ";
display(root);
cout<<endl;
cout<<"The Left view is : ";
leftV(root);
return 0;
}