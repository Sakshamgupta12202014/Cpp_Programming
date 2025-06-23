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

Node* insertIntoBST(Node* root, int val) {

    if(root == NULL) {
        root = new Node(val);
        return root;
    }

    else if(val > root->data) {
        //right part mei jana h
        root->right = insertIntoBST(root->right, val);
    }
    else if(val < root->data) {
        //left part mei jana h
        root->left = insertIntoBST(root->left, val);
    }

    return root;
}

Node* takeInput(Node* root) {
    cout << "Enter data to insert into BST " << endl;
    int data;
    cin >> data;

    while (data != -1) { // Use a loop for repeated input
        root = insertIntoBST(root, data);
        cout << "Enter next data (-1 to stop): ";
        cin >> data;
    }
    return root;

}


bool searchInBST(Node* root , int el) {

    if(root == NULL) return false;

    if(root->data == el) {
        return true;
    }
    if(el > root->data) {
        //right mei jana hai
        searchInBST(root->right, el);
    }

    else if(el < root->data) {
        //left mei jana hai
        searchInBST(root->left,el);
    }
}

Node* minValue(Node* root) {

    Node* temp = root;
    while(temp->left != NULL) {
        temp=temp->left;
    }
    return temp;
}

Node* maxValue(Node* root) {

    Node* temp = root;
    while(temp->right != NULL) {
        temp=temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root, int el) {


    if(root == NULL) {
        return NULL;
    }
    else if(root->data == el) {
        //0 child
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        //1 child
        else if(root->left == NULL && root->right != NULL) {
            //right child
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->left != NULL && root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //2 child
        else if(root->left != NULL && root->right != NULL) {
            int min = minValue(root->right)->data;
            root->data = min;
            root->right = deleteFromBST(root->right, min);
            return root;
        }
    }
    else if(root->data > el) {
        //left 
        root->left = deleteFromBST(root->left, el);

    }
    else if(root->data < el) {
        //right
        root->right = deleteFromBST(root->right, el);
    }
}

vector<int> inOrderPredecessor(Node* root, vector<int> arr) {

    Node* temp = root;
    if(root == NULL) return arr;
    
    arr = inOrderPredecessor(temp->left, arr);
    arr.push_back(temp->data);
    arr = inOrderPredecessor(temp->right, arr);
    return arr;
}


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

    Node* root = NULL;
    root = takeInput(root);

    int elem;
    do{
        cout << "Enter elem to search in BST" << endl;
        cin >> elem;
        
        bool res = searchInBST(root, elem);
        if(res) {
            cout << "Element found in BST" << endl;
        }else{
            cout << "Element is not found in BST" << endl;
        }
    }
    while(elem != -1);

    cout << "finding minimum value " << endl;
    Node* minNode = minValue(root);
    cout << "Printing minimum value in BST" << endl;
    cout << minNode->data << endl;

    cout << "finding maximum value " << endl;
    Node* maxNode = maxValue(root);
    cout << "Printing maximum value in BST" << endl;
    cout << maxNode->data << endl;

    vector<vector<int>> v ;
    v = levelOrderTraversal(root);

    for(int i=0; i<v.size(); i++) {

        for(int j=0; j<v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }


    // cout << "printing inorder traversal of BST " << endl;
    // vector<int> arr ;
    // arr = inOrderPredecessor(root,arr);

    // for(int i=0; i<arr.size(); i++) {
    //    cout << arr[i] << "  ";
    // }
    // cout << endl;

    // cout << "Enter element to find its inOrderPredecessor " << endl;
    // int e;
    // cin >> e;
    // for(int i=0; i<arr.size(); i++) {
    //     if(arr[i] == e) {
    //         cout << "its inOrderPredecessor is " << arr[i-1] << endl;
    //         break;
    //     }
    // }

    return 0;
}