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

void countLeafNodes(Node* root, int* leafCnt) {

    if(root == NULL) return;

    if(root->left == NULL && root->right == NULL) {
        *leafCnt = *leafCnt + 1; 
        return;
    }

    countLeafNodes(root->left, leafCnt);
    countLeafNodes(root->right, leafCnt);

}

int main() {

    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(7);

    root->left->right = new Node(4);
    root->left->left = new Node(3);
    root->right->left = new Node(2);
    root->right->right = new Node(6);
    root->right->right->right = new Node(1);

    int leafCount = 0;
    countLeafNodes(root, &leafCount);

    cout << "Count of leaf nodes " << leafCount;

    return 0;
}