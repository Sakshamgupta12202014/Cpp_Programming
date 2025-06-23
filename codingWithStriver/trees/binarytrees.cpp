#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* right;
        Node* left;

        Node(int data) {
            this->data = data;
            this->right = nullptr;
            this->left = nullptr;
        }

        Node(int data, Node* right, Node* left) {
            this->data = data;
            this->right = right;
            this->left = left;
        }
};


void preOrderTraversal(Node* root) {

    if(root == NULL) { return;}

    cout << root->data << "  ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}

void inOrderTraversal(Node* root) {

    if(root == NULL) return ;

    inOrderTraversal(root->left);
    cout << root->data << "  ";
    inOrderTraversal(root->right);

}

void postOrderTraversal(Node* root) {
    if(root == NULL) return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << "  ";
}

int maxHeight(Node* root) {

    if(root==NULL) {
       return 0;
    }

    int lh = maxHeight(root->left);
    int rh = maxHeight(root->right);
    
    return 1 + max(lh , rh);
}

int main() {

    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(7);

    root->left->right = new Node(4);
    root->left->left = new Node(3);
    root->right->left = new Node(2);
    root->right->right = new Node(6);

    preOrderTraversal(root);
    cout << endl;
    inOrderTraversal(root);
    cout << endl;
    postOrderTraversal(root);
    cout << endl; 

    int heightOfTree = maxHeight(root);
    cout << heightOfTree << endl;

    return 0;
}