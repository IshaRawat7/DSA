/*Built tree using postorder and inorder*/

#include<iostream>
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

int search(int inorder[],int s,int e,int curr){
for(int i=s;i<=e;i++){
    if(inorder[i] == curr){
        return i;
    }
}
return -1;
}

Node* builtTree(int postorder[], int inorder[],int s,int e){
    static int idx = e-s;
    if(s>e){
        return NULL;
    }
    int curr = postorder[idx];
    idx--;
    Node* node = new Node(curr);
    if(s==e){
        return node;
    }
    int pos = search(inorder,s,e,curr);
    node->right=builtTree(postorder,inorder,pos+1,e);
    node->left = builtTree(postorder,inorder,s,pos-1);
    return node;
}

void display_inorder(Node* root){
    if(root == NULL){
        return;
    }
    display_inorder(root->left);
    cout<<root->data<<" ";
    display_inorder(root->right);
}
int main(){
    int inorder[] = {4,2,1,5,3};
    int postorder[] = {4,2,5,3,1};
    Node* root = builtTree(postorder,inorder,0,4);
    display_inorder(root);

return 0;
}