/* Find the distance between two nodes in a binary tree . The distance between 2 nodes is the minimum number of edges to be traversed to reach one node from another.
Strategy:-
1. Find the LCA (lowest common ancestor).
2. Find distance of n1(d1) & n2(d2) from LCA.
3. Return (d1+d2).
*/

#include "bits/stdc++.h"
using namespace std;

class Node{
    public:int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right= NULL;
    }
};

Node* LCA(Node* root,int n1,int n2){
    if(root == NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    Node* left = LCA(root->left,n1,n2);
    Node* right = LCA(root->right,n1,n2);

    if(left != NULL && right != NULL){
        return root;
    }
    if(left == NULL && right == NULL){
        return NULL;
    }
    if(left != NULL && right == NULL){
        return LCA(root->left,n1,n2);
    }
    if(left == NULL && right != NULL){
        return LCA(root->right,n1,n2);
    }
}

int findD(Node* root,int k,int dis){
    if(root == NULL){
        return -1;
    }
    if(root->data == k){
        return dis;
    }
    int l = findD(root->left,k,dis+1);
    if(l != -1){
        return l;
    }
    return findD(root->right,k,dis+1);

}

int d(Node* root,int n1,int n2){
    Node* lca = LCA(root,n1,n2);
    int d1 = findD(lca,n1,0);
    int d2 = findD(lca,n2,0);

    return d1+d2;
}

void displayin(Node* root){
    if(root ==  NULL){
        return;
    }

    displayin(root->left);
    cout<<root->data<<" ";
    displayin(root->right);
}

int32_t main(){
Node* root = new Node(1);
root->left = new Node(2);
root->left->left = new Node(4);
root->right = new Node(3);
root->right->right = new Node(5);
cout<<"The tree is : ";
displayin(root);
cout<<"\n";
cout<<"The distance Between Nodes is : ";
cout<<d(root,4,5);
cout<<endl;
return 0;
}