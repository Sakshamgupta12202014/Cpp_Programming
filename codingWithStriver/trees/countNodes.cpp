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

int countNodes(Node* root,int* count) {
    
    if(root == NULL) return 0;
    *count = *count + 1;
    countNodes(root->left, count);
    countNodes(root->right, count);
    return *count;
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(7);

    root->left->right = new Node(4);
    root->left->left = new Node(3);
    root->right->left = new Node(2);
    root->right->right = new Node(6);

    int cnt = 0;
    int nodesCount = countNodes(root,&cnt);
    cout << nodesCount << endl;
        
    return 0;
}