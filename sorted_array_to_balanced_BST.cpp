/*Sorted Array to balanced BST*/
/*Strategy
1.Make middle element the root.
2.Recursively do the same for subtrees :- a. start to mid-1 for left subtree    b.mid+1 to end for right subtree.


*/
#include "bits/stdc++.h"
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

Node* BSTSA(int arr[], int start,int end){

    if(start > end){
        return NULL;
    }
    int mid = (start+end)/2;
    Node* root = new Node(arr[mid]);
    root->left = BSTSA(arr,start,mid-1);
    root->right = BSTSA(arr,mid+1,end);

    return root;
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }
     cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int32_t main(){
int arr[] = {10,20,30,40,50};

Node*root = BSTSA(arr,0,4);
preorder(root);
cout<<endl;

return 0;
}