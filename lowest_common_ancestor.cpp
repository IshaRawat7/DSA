/*Lowest Common Ancestor
LCA is point of path change.
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
        right = NULL;
        left= NULL;
    }
};
bool getPath(Node* root, int key, vector<int> &path){
    if(root == NULL){
        return false;
    }
  path.push_back(root->data);
  if(root->data == key){
    return true;
  }

  if(getPath(root->left,key,path) || getPath(root->right,key,path)){
    return true;
  }
  path.pop_back();
  return false;
}

int lowestCA(Node* root,int n1,int n2){
    vector<int> path1, path2; //Time complexity = O(n);
    if(!getPath(root,n1, path1) ||  !getPath(root,n2,path2)){
        return -1;
    }

    int pc;
    for(pc =0;pc<path1.size() && path2.size();pc++){
          if(path1[pc] != path2[pc]){
            break;
          }
    }
    return path1[pc-1];
    
}
//new fun
Node* LCA2(Node* root,int n1 , int n2){
    if(root == NULL){
        return NULL;
    }
if(root->data == n1 || root->data == n2){
    return root;
}
 Node* leftLca = LCA2(root->left,n2,n1); //Time complexity = O(n)
 Node* rightLca = LCA2(root->right,n2,n1);

 if(leftLca != NULL && rightLca !=NULL){
 return root;
 }
  if(leftLca == NULL && rightLca != NULL){
    return rightLca;
  }
if(rightLca == NULL && leftLca != NULL){
    return leftLca;
}
}

int32_t main(){
Node* root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->left->left = new Node(4);
root->right->left = new Node(5);
root->right->right = new Node(6);
root->right->left->left = new Node(7);

/*int lca = lowestCA(root,7,6);
if(lca == -1){
    cout<<"LCA doesn't exits";
}
else{
    cout<<"LCA :" <<lca<<endl;
}*/

Node* lca = LCA2(root,7,6);
if(lca == NULL){
    cout<<"LCA doesn't exits";
}
else{
    cout<<"LCA :" <<lca->data<<endl;
}
return 0;
}