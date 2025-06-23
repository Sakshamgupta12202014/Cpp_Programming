#include <bits/stdc++.h>
using namespace std;


//HEIGHT OF TREE USING LEVEL ORDER TRAVERSAL

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

vector<vector<int>> levelOrderTraversal(Node* root) {

    Node* temp = root;
    vector<vector<int>> ans;
    if(root == NULL) return ans;
    queue<Node*> q;
    q.push(root);

    int height = 0;

    while(!q.empty()) {
        vector<int> level;
        int size = q.size();

        for(int i=0; i<size; i++) {
            Node* node = q.front();
            q.pop();
            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
        height++;
    }
    cout << "height of tree is " << height << endl;
    return ans;
}

int main() {

    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(7);

    root->left->right = new Node(4);
    root->left->left = new Node(3);
    root->right->left = new Node(2);
    root->right->right = new Node(6);

    vector<vector<int>> vec = levelOrderTraversal(root);
    return 0;
}