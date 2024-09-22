/*Catalan Number : 1 1 2 5 14 */
/*Catalan Number are a sequence of natural numbers that occur in various counting problems, often involving recursively defined objects.
Their closed form is in terms of binomial coefficients:
Cn = (1/n+1)* 2nCn = Sigma CiCn-i , i = 0 to n-1;
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


/*int CatalanN(int n ){
    if(n <= 1){
        return 1;
    }
    int res = 0; 
    for(int i =0;i<=n-1;i++){
     res += CatalanN(i) * CatalanN(n-i-1);
    }
    
    return res;

}
*/

vector<Node*> constructT(int start, int end){
    vector<Node*> trees;
    if(start>end){
         trees.push_back(NULL);
         return trees;
    }

    for(int i =start;i<=end;i++){
        vector<Node*> leftsubtrees = constructT(start,i-1);
        vector<Node*> rightsubtrees = constructT(i+1,end);

        for(int j =0;j<leftsubtrees.size();j++){
            Node* left = leftsubtrees[j];
            for(int k =0;k<rightsubtrees.size();k++){
           Node* right = rightsubtrees[k];
            Node* node =new Node(i);
            node->left = left;
            node->right = right;

            trees.push_back(node);
            }
        }
        
    }
    return trees;
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
/*for(int i =0;i<10;i++){
    cout<< CatalanN(i) << " ";
}
cout<<endl;
*/
/*
Application of Catalan Numbers
1.Possible BSTs.
2.Paranthesis/ bracket Combinations.
3.Possible forests.
4.Ways of triangulations.
5.Possible Paths in matrix.
6.Dividing a circle using N chords.
7.Dyck words of given length and much more.
*/


/*Valid Binary Search Tree structure: given n =3 where n is the nodes in the tree.*/
/*Catalan of 3 = 5 and for 5 nodes we have 5 valid BST.*/
vector<Node*> totaltrees = constructT(1,4);
for(int i =0;i<totaltrees.size();i++){
    cout<<(i+1)<< " : ";
    preorder(totaltrees[i]);
    cout<<endl;
}

return 0;
}


















