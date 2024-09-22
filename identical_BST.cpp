/*For given root nodes of 2 binary search trees,print if the BSTs are identical or Not. Identical BSTs are structurally identical and have equal values for the nodes in the structure.
Strategy
1. If both empty,return true.
2.If both are non-empty,
a.Check that the data at nodes is equal.
b.Check if left subtrees are same.
c.Check if right subtrees are same.

3. if(a,b,c) are true,return true, else return false.
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
        left = NULL;
        right = NULL;
    }
};

bool isIdentical(Node* root1,Node* root2){
if(root1 == NULL &&  root2 == NULL){
    return true;
}

else if(root1 == NULL || root2 ==NULL){
    return false;
}
else{
    bool c1= root1->data == root2->data;
    bool c2 = isIdentical(root1->left,root2->left);
    bool c3 = isIdentical(root1->right,root2->right);

    if(c1 && c2 && c3){
        return true;
    }
    return false;
}
}


int32_t main(){
/*BST 1*/
Node* root1 = new Node(7);
root1->left = new Node(4);
root1->left->left = new Node(3);
root1->left->right = new Node(5);

/*BST 2*/
Node* root2 = new Node(7);
root2->left = new Node(4);
root2->left->left = new Node(3);
root2->left->right = new Node(5);

/*check Identical*/
if(isIdentical(root1,root2)){
    cout<<"Both the BSTs are identical."<<endl;
}
else{
    cout<<"Both the BSTs are not Identical!."<<endl;
}
return 0;
}