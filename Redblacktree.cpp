#include <iostream>
using namespace std;

struct node {
    int data;
    node *left, *right;
};

node* create(int data) {
    node* newnode = new node;
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

node* insert(node* root, int data) {
    if (!root)
        return create(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}

void inorder(node* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    node* root = NULL;
    root = insert(root, 10);
    insert(root, 20);
    insert(root, 5);

    inorder(root);
}