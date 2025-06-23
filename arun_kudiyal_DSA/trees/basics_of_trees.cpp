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
    int nodes;

    BinaryTree(){
        root = new Node();
        nodes=0;
    }

    

};