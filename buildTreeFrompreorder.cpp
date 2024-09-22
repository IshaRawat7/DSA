/*Build a BST from Preorder*/

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

/*Node* insertValues(Node* root ,int val){
    Node* node = new Node(val);
    if(root == NULL){
        return node;
    }
    if(val < root->data){
        root->left = insertValues(root->left,val);
    }
    else{
        root->right = insertValues(root->right,val);
    }
    return root;
}*/

void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

Node* insertUsingpreorder(int preorders[], int* preorderIdx,int key,int mini, int maxi,int n){
if(*preorderIdx >= n){
    return NULL;
}
Node* root = NULL;
if(key > mini && key < maxi){
    root = new Node(key);
    *preorderIdx +=1;
  //Time conplexity = O(n);
    if(*preorderIdx < n){
        root->left = insertUsingpreorder(preorders,preorderIdx, preorders[*preorderIdx],mini,key,n);
    }
    if(*preorderIdx < n){
        root->right = insertUsingpreorder(preorders,preorderIdx, preorders[*preorderIdx],key,maxi,n);
    }
      
} 
return root;

}

int32_t main(){
/*Node* root = NULL;
root  = insertValues(root,5);
root  = insertValues(root,3);
root  = insertValues(root,1);
root  = insertValues(root,6);
root  = insertValues(root,9);
root  = insertValues(root,2);
root  = insertValues(root,4);
root  = insertValues(root,10);*/

int preorders[]={7,5,4,6,8,9};
int n = 6;
int preorderIdx = 0;

Node* root = insertUsingpreorder(preorders, &preorderIdx, preorders[0],INT_MIN,INT_MAX,n);
cout<<"The preorder Traversal of the BST is : ";
preorder(root);
cout<<"\n";
cout<<"Inorder Traversal is : ";
inorder(root);
return 0;
}   