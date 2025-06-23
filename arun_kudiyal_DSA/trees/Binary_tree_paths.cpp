#include <bits/stdc++.h>

using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(){
        this->data=0;
        this->left=nullptr;
        this->right=nullptr;
    }
    Node(int data){
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }

};
    
class BinaryTree{
public:
    Node* root;

    BinaryTree(){
        root = new Node();
    }

    ~BinaryTree(){
        delete root;
    }

};

void solve(Node* root, vector<string> &ans, string &temp) {
    if(root == nullptr) return;

    char ch = '0' + root->data;
    temp.push_back(ch);
    if(root->left == nullptr && root->right == nullptr) {
        ans.push_back(temp);
        temp.pop_back();
        return;
    }

    solve(root->left, ans, temp);
    solve(root->right, ans, temp);
    temp.pop_back();
}

// vector<string> binaryTreePaths(Node* root) {
//     vector<string> ans;
//     string temp;
//     solve(root, ans, temp);
//     return ans;
// }


class Solution {
    public:
        void findPath(Node* node, vector<string>& ans, string temp) {

            temp += to_string(node->data);  // Add the current node value to the path
            if (node->left) findPath(node->left, ans, temp + "->");  // Traverse left
            if (node->right) findPath(node->right, ans, temp + "->"); // Traverse right
            if (!node->left && !node->right) ans.push_back(temp);  // Add path if leaf node
        }
    
        vector<string> binaryTreePaths(Node* root) {
            vector<string> ans;
            if (root) findPath(root, ans, "");  // Start traversal from the root
            return ans;
        }
};

int main() {

    BinaryTree* binaryTree = new BinaryTree();   // root mil gaya hoga
    binaryTree->root->data = 1;
    binaryTree->root->left = new Node(2);
    binaryTree->root->right = new Node(3);
    binaryTree->root->left->right = new Node(5);
    binaryTree->root->left->right->left = new Node(7);
    binaryTree->root->left->right->right = new Node(8);
    binaryTree->root->right->left = new Node(6);
    binaryTree->root->right->right = new Node(9);



    vector<string> arr;
    // arr = binaryTreePaths(binaryTree->root);

    
    Solution* soln = new Solution();
    arr = soln->binaryTreePaths(binaryTree->root);


    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
    
    return 0;
}