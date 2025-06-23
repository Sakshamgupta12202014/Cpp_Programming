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

Node* buildTree(Node* root) {

    cout << "Enter data " << endl;
    int val;
    cin >> val;

    root = new Node(val);
    if(val == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << val << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in the right of " << val << endl;
    root->right = buildTree(root->right);

    return root;
}

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

    Node* root = NULL;
    root = buildTree(root);
    int leafCount = 0; 
    countLeafNodes(root, &leafCount);
    cout << "count of leaf nodes " << leafCount << endl;


    return 0;
}