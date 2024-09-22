/* Level Order Traversal
 Sum of kth level in a tree;
*/

#include "bits/stdc++.h"
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
    data = val;
    left = NULL;    
    right= NULL;    
    }
};
void printLevelOrder(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node != NULL){
            cout<<node->data<<endl;
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
            else if(!q.empty()){
                q.push(NULL);
            }
        }
    }
}

void display(Node* &root){
    if(root == NULL){
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
int main(){
Node* root = new Node(1);
root->left = new Node(2);
root->right= new Node(3);
root->left->left= new Node(4);
root->right->left= new Node(5);

printLevelOrder(root);
cout<<endl;
display(root);

return 0;
}