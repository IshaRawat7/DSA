/* Binary Tree Creation using inorder and preorder given sequence */

/*Preorder: Root Left Right*/
/*Inorder: Left Root Right*/

#include<iostream>
using namespace std;
class Node{
 public:
 int data;
 Node* left;
 Node* right;
 Node(int val){
    data = val;
    left =NULL;
    right= NULL;
}
};

int search(int inorder[], int s,int e,int curr){
    for(int i=s;i<=e;i++){
        if(inorder[i] == curr){
            return i;
        }
    }
    return -1;
}

Node* builtTree(int preorder[],int inorder[], int s,int e){
    static int idx = 0;
    if(s>e){
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    Node* node = new Node(curr);
 if(s == e){
  return node;
 }
    int pos = search(inorder,s,e,curr);
    node->left= builtTree(preorder,inorder,s,pos-1);
    node->right= builtTree(preorder,inorder,pos+1, e);
    return node;
}


void display(Node* root){
    if(root == NULL){
        return;
    }
 display(root->left);
 cout<<root->data<<" ";
 display(root->right);
}

int main(){
int preorder[] ={1,2,4,3,5};
int inorder[] = {4,2,1,5,3};

//build tree
Node* root = builtTree(preorder,inorder, 0,4);
display(root);
return 0;
}