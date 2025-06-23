#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        Node* back;
        int data;
        Node* next;
    
    Node(Node* back, int data, Node* next) {
        this->back = back;
        this->data = data;
        this->next = next;
    }
    Node(int data) {
        this->back = nullptr;
        this->data = data;
        this->next = nullptr;
    }

};

void printLinkedList(Node* start){

    cout << "printing linkedlist" << endl;
    while(start != nullptr) {
        cout << start->data << endl;
        start = start->next;
    }
}

Node* reverseDll(Node* head) {

    Node* current = head;
    Node* temp = NULL;

    while( current!=NULL ) {
        temp = current->back;
        current->back = current->next;
        current->next = temp;
        //since next and back have changed their directions so 
        current = current->back;
    }
    Node* newHead = temp->back;
    return newHead;

}

Node* convertA2DLL(vector<int> arr) {
    cout << "converting array to DLL...." << endl;

    Node* head = new Node(arr[0]);
    int i=1;
    Node* tail;
    Node* prev = head;
    while( i<arr.size() ) {

        tail = new Node(prev, arr[i], nullptr);
        prev->next = tail; 
        prev = tail;
        i++;
    }

    return head;
}

int main() {

    vector<int> arr = {3,4,5,6};
    Node* head = convertA2DLL(arr);
    printLinkedList(head);

    head = reverseDll(head);
    printLinkedList(head);
    
    return 0;
}