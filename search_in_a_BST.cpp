/*Search in a BST*/
/*Time complexity = (logn)*/

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

Node* insertValues(Node* root,int val){
     Node *node = new Node(val);

    if (root == NULL)
    {
        return node;
    }

    if (val < root->data)
    {
        root->left = insertValues(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = insertValues(root->right, val);
    }
    return root;
}

Node* searchNode(Node* root , int key){
    if(root == NULL){
        return NULL;
    }
   if(root->data == key){
    return root;
   }
   // data <key
   if(root->data >key){
    return searchNode(root->left,key);
   }
  //data >key 
    return searchNode(root->right,key);
   
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* inorderSuccesor(Node* root){
    Node* current = root;
    while(current && current->left != NULL){
        current = current->left;
    }
    return current;
}

Node* DeleteInBST(Node* root,int d){
    if(d <root->data){
        root->left = DeleteInBST(root->left,d);
    }
    else if(d > root->data){
        root->right = DeleteInBST(root->right,d);
    }
    else{
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right = NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = inorderSuccesor(root->right);
        root->data = temp->data;
        root->right = DeleteInBST(root->right,temp->data);
    }

    return root;
   
}

int32_t main(){
Node* root = NULL;
root = insertValues(root,7);
root = insertValues(root,1);
root = insertValues(root,3);
root = insertValues(root,2);
root = insertValues(root,4);
root = insertValues(root,6);
root = insertValues(root,5);
root = insertValues(root,8);
root = insertValues(root,9);
root = insertValues(root,10);

cout<<"The BST is : ";
inorder(root);
cout<<endl;

/*if(searchNode(root,6) == NULL){
    cout<<"Key doesn't exists🥹 "<<endl;
}
else{
    cout<<"Key exists"<<endl;
}
*/

root = DeleteInBST(root,5);
inorder(root);
return 0;
}