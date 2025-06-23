#include <bits/stdc++.h>
using namespace std;


class Node{
public:
    int data;
    Node* left, *right;
    Node(int data){
        this->data=data;
        this->left=this->right=nullptr;
    }
};

class BinarySearchTree {
public:
    Node* root;
    int cnt;
    BinarySearchTree(){
        root = nullptr;
    }

    // encapsulated code 
    void insert(int key){
        root = insertKey(root, key);
    }

    void inOrder(){
        inOrderTraversal(root);
    }

    void search(int key){
        Node* res = searchKey(root, key);
        if(res ==nullptr){
            cout << key << " does not exist in the tree" << endl;
        }
        else{
            cout << key << " found in the tree at " << res <<  endl;
        }
    }

    void descendingTraversalOfBST(){
        descendingTraversal(root);
    }

    Node* deleteVal(int key){
        root = deleteKey(root,key);
        return root;
    }

    int findHeightOfTree(Node* root){
        if(root == nullptr) return 0;

        int left  = findHeightOfTree(root->left);
        int right = findHeightOfTree(root->right);

        int height = 1 + max(left, right);
        return height;
    }

private:
    // using recursion 
    Node* insertKey(Node* root, int key){
        if(root == nullptr){
            root = new Node(key);
        }

        else{
            if(root->data > key ){
                root->left = insertKey(root->left, key);
            }
            else{
                root->right = insertKey(root->right, key);
            }
        }
        return root;
    }

    void inOrderTraversal(Node* root){
        if(root != nullptr){
            inOrderTraversal(root->left);  // backtrack to previous not null node 
            cout << root->data << " ";    // print the data of that node
            inOrderTraversal(root->right);   // then backtrack again
        }

    }

    // running time of search  --> O(log2 N <--> N) ||  space comp --> O(log2 N <--> N)
    Node* searchKey(Node* root, int key){
        if(root == nullptr || root->data == key){return root;}

        if(root->data > key){
            // go left of current node and search
            searchKey(root->left, key);
        }

        else{
            // go right and search 
            searchKey(root->right , key);
        }
    }

    void descendingTraversal(Node* root){
        if( root!=nullptr ){
            descendingTraversal(root->right);
            cout << root->data << "  ";
            descendingTraversal(root->left);
        }
    }

    int findMin(Node* root){
        Node* temp = root;
        int minValue = INT_MAX;

        while(temp!=nullptr){
            minValue = temp->data;
            temp = temp->left;
        }
        return minValue;
    }

    Node* deleteKey(Node* root, int key){
        // search key
        if(root == nullptr) return root;

        else{
            if(key < root->data ) root->left = deleteKey(root->left, key);
            else if(key > root->data) root->right = deleteKey(root->right, key);

            else { // key == root->data
                // catering 2nd condition of deletion in which node has 1 child  also caters leaf node
                if( root->left == nullptr) return root->right;         // successor will be right  
                else if(root->right == nullptr) return root->left;      // successor will be the left 
                
                else {  // when node has exactly two childs

                    // taking inOrder Successsor from the right of the Node
                    int minValue = findMin(root->right);
                    root->data = minValue;  
                    // remove duplicate elements from tree 
                    root->right = deleteKey( root->right , root->data); 

                    // taking inOrder successor from the left of the Node
                    // int maxValue = findMax(root->left);
                    // root->data = maxValue;

                    // root->left = deleteKey(root->left , root->data);
                }

            }
        }

    }

    Node* deleteIterative(Node* root, int key){

    }

};

int main(){
    BinarySearchTree* bst = new BinarySearchTree();   // if you are using new then bst will be a pointer 
    // bst.root = bst.insertKey(bst.root, 40);
    // bst.root = bst.insertKey(bst.root, 30);
    // bst.root = bst.insertKey(bst.root, 100);
    bst->insert( 40);
    bst->insert( 30);
    bst->insert( 100);
    bst->insert( 50);
    bst->insert( 20);
    bst->insert( 60);
    

    bst->inOrder();

    // bst->search(20);

    // bst->descendingTraversalOfBST();
    cout << endl;

    bst->deleteVal(50);

    bst->inOrder();
}