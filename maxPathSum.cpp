/*Maximum possible sum of a path in the binary tree,starting and ending at any node.*/
/*Strategy
For each node,compute:
1.Node val.
2.Max path through left child+ node val.
3.max path through right child+ node val.
4.Max path through left child + Max path through right child + node val.
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
      left = NULL;
    }
};

int maxPathSumUtil(Node* root , int &ans){
         if(root == NULL){
            return 0;
         }
         int l = maxPathSumUtil(root->left,ans);
         int r = maxPathSumUtil(root->right,ans);

         int NodeMax = max(max(root->data , root->data + l + r),max(root->data + l , root->data + r));

         ans = max(ans,NodeMax);
        
        int singlePathSum = max(root->data,max(root->data + l , root->data + r));
        return singlePathSum;
}

int maxPathSum(Node* root){
    int ans = INT_MIN;
    maxPathSumUtil(root ,ans);
    return ans;
}
int32_t main(){
Node* root = new Node(1);
root->left = new Node(-12);
root->left->left = new Node(4);
root->right = new Node(3);
root->right->left = new Node(5);
root->right->right = new Node(-6);

/*sum*/
cout<<maxPathSum(root)<<endl;
return 0;
}