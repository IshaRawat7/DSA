#include <iostream>
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

void calcp(Node* root, Node** first, Node** mid, Node** last, Node** prev) {
    if (root == NULL) {
        return;
    }
    calcp(root->left, first, mid, last, prev);

    if (*prev && root->data < (*prev)->data) {
        if (!*first) {
            *first = *prev;
            *mid = root;
        } else {
            *last = root;
        }
    }
    *prev = root;

    calcp(root->right, first, mid, last, prev);
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void restoreBST(Node* root) {
    Node* first = NULL;
    Node* mid = NULL;
    Node* last = NULL;
    Node* prev = NULL;

    calcp(root, &first, &mid, &last, &prev);

    // Case 1
    if (first && last) {
        swap(&(first->data), &(last->data));
    } else if (first && mid) {
        swap(&(first->data), &(mid->data));
    }
}

void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = new Node(6);
    root->left = new Node(9);
    root->right = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right->right = new Node(13);

    cout << "BT before restoring BST: ";
    inorder(root);
    cout << endl;

    restoreBST(root);

    cout << "After restoring BST: " << endl;
    inorder(root);

    return 0;
}
