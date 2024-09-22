/*Height of Binary Tree is equal to number of levels in a tree.
Diameter: Number of nodes in the longest path betweeen any 2 leaves.
*/
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inorderT(Node* root) {
    if (root == NULL) {
        return;
    }
    inorderT(root->left);
    cout << root->data << " ";
    inorderT(root->right);
}

int HeightBT(Node* root) {
    if (root == NULL) {
        return 0;
    }
    int lh = HeightBT(root->left);//Time Complexity O(n); n= no. of nodes
    int rh = HeightBT(root->right);
    return max(lh, rh) + 1;
}

int diameterBT(Node* root){
  if(root == NULL){
    return 0;
  }
    int lh = HeightBT(root->left);
    int rh = HeightBT(root->right);  
    int currD = lh + rh + 1;
 //Time complexity O(n^2) where ,n= number of nodes.
    int ld = diameterBT(root->left);
    int rd = diameterBT(root->right);

    return max(max(ld,rd),currD);
}

int calD(Node* root,int* h){
     if (root == NULL) {
        *h = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int ld = calD(root->left,&lh);
    int rd = calD(root->right,&rh);
    int currD = lh + rh + 1;
    *h = max(lh, rh) + 1;
    return max(currD, max(ld, rd));
}

int main() {
    int h =0;
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->right = new Node(3);
    root->left->right->right = new Node(4);
    root->left->left = new Node(5);
    root->left->left->right = new Node(6);
    root->left->left->left = new Node(7);
    root->left->left->left->left = new Node(8);
    cout << "Height of the binary tree: " << HeightBT(root) << endl;
    inorderT(root);
    cout<<endl;
    cout<<"Diameter of the Binary tree : "<<diameterBT(root)<<endl;
    cout<<"Diameter of the Binary tree : "<<calD(root,&h)<<endl;

    return 0;
}
