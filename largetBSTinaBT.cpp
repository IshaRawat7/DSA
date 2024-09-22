#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

struct Info {
    int size;
    int max;
    int min;
    int ans;
    bool isBST;
};

Info LargestBST(Node* root) {
    if (root == NULL) {
        return {0, INT_MIN, INT_MAX, 0, true};
    }

    if (root->left == NULL && root->right == NULL) {
        return {1, root->data, root->data, 1, true};
    }

    Info leftinfo = LargestBST(root->left);
    Info rightinfo = LargestBST(root->right);

    Info curr;
    curr.size = (1 + leftinfo.size + rightinfo.size);

    if (leftinfo.isBST && rightinfo.isBST && leftinfo.max < root->data && rightinfo.min > root->data) {
        curr.min = min(leftinfo.min, min(rightinfo.min, root->data));
        curr.max = max(rightinfo.max, max(leftinfo.max, root->data));

        curr.ans = curr.size;
        curr.isBST = true;
        return curr;
    }

    curr.ans = max(leftinfo.ans, rightinfo.ans);
    curr.isBST = false;
    return curr;
}

int main() {
    Node* root = new Node(6);
    root->left = new Node(5);
    root->right = new Node(8);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->left = new Node(7);
    root->right->right = new Node(9);

    cout << "Largest BST size is: " << LargestBST(root).ans << endl;
    return 0;
}
