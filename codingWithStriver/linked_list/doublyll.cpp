#include <bits/stdc++.h>
using namespace std;

/*Semicolon After Template Declaration: There should not be a semicolon after the template<typename T> declaration. It should be directly followed by the class definition.

Incorrect Class Declaration: The class should be declared as class Node without the <T> after the class name. The template parameter is already specified at the beginning.

Pointer Declaration: The member variable next should be declared as Node<T>* next; to specify that it is a pointer to a Node of type T.*/

// template<typename T>

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

void printLinkedList(Node* head) {

    Node* tail=head;
    while(tail != NULL) {
        cout << tail->data << "  ";
        tail=tail->next;
    }
    cout << endl;
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
//Deletions from a DLL

Node* deleteTail(Node* head) {
    Node* prev;
    Node* tail = head;
    //Edge Cases
    if(head==NULL) {
        cout<<"DLL is empty" << endl;
        return NULL;
    }
    else if(head->next == NULL) {
        cout << "Deleting the only node in DLL" << endl;
        free(head);
        return NULL;
    }
    while(tail->next != NULL) {
        prev = tail;
        tail = tail->next;
    }
    prev->next = nullptr;
    tail->back = nullptr;
    free(tail);
    return head;
}


Node* deleteKthNode(Node* head, int k) {

    //see copy for reference
}

Node* deleteHead(Node* head) {

    if(head==NULL) return NULL;

    if(head->next == NULL) {
        cout << "deleted only node in DLL" << endl;
        return NULL;
    }
    
    cout << "deleting head ...." << endl;
    Node* tail = head;
    head = head->next;
    head->back = nullptr;
    tail->next = nullptr;

    free(tail);
    return head;
}

//Insertions in DLL
Node* insertBeforeHead(Node* head, int value) {

    Node* newHead = new Node(nullptr, value, head);
    head->back = newHead;
    return newHead;
}


Node* insertBeforeTail(Node* head, int value) {

    if(head->next == NULL) {
        head = insertBeforeHead(head ,value);
        return head;
    }

    Node* prev;
    Node* tail = head;
    while(tail->next != NULL) {
        tail = tail->next;
    }

    prev = tail->back;
    Node* newNode = new Node(prev, value, tail);
    prev->next = newNode;
    tail->back = newNode;
    return head;
}

Node* insertBeforeNode(Node* head, int value, int k) {

    cout << "Inserting element before " << k << "position" << endl;
    //Edge Cases
    if(k==1) {
        head = insertBeforeHead(head, value);
        return head;
    }
    //first step => reach at the kth position
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL) {
        cnt++;
        if(cnt==k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(prev, value, temp);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}

void insertBeforeValue(Node* node, int val) {

    cout << "Inserting element before " << node->data << endl;
    Node* prev = node->back;
    Node* newNode = new Node(prev, val, node);
    prev->next = newNode;
    node->back = newNode;
    
}

int main() {
    
    //Array To LinkedList
    vector<int> arr = {10, 3,8,19};

    Node* head = convertA2DLL(arr);
    printLinkedList(head);
    // printLinkedList(head);
    
    // vector<int> v = { };
    // Node* head2 = convertA2DLL(v);
    // printLinkedList(head2);

    // head = deleteTail(head);
    // printLinkedList(head);

    // head = deleteHead(head);
    // printLinkedList(head);

    vector<int> b = {0};
    Node* head2 = convertA2DLL(b);
    printLinkedList(head2);

    // head2 = deleteHead(head2);
    // printLinkedList(head2);

    head2 = deleteKthNode(head2, 3);
    int value = 10;

    head2 = insertBeforeHead(head2, value);
    printLinkedList(head2);

    head2 = insertBeforeHead(head2, 5);
    printLinkedList(head2);

    head2 = insertBeforeNode(head2, 89, 2);
    printLinkedList(head2);

    return 0;
}

    // if(head == NULL) {
    //     cout << "DLL is empty" << endl;
    //     return NULL;
    // }
    // else if( head->next == NULL ) {
    //     if( k==1) {
    //         //delete the only node in DLL
    //         cout << "Warning!! deleting the only node from DLL" << endl;
    //         return NULL;
    //     }
    //     cout << "the DLL has only 1 node & k > 1" << endl;
    //     return NULL;
    // }
    // else if(k==1) {
    //    return deleteHead(head);
    // }
    // //k>1
    // int cnt=0;
    // Node* tail = head;
    // Node* prev;
    // while(tail!=NULL) {
    //     cnt++;
    //     if(cnt == k) {
    //         prev->next = tail->next;
    //         tail = tail->next;
    //         tail->back = prev;
    //     }
    //     prev = tail;
    //     tail = tail->next;
    // }