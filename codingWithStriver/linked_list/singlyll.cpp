#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

        // Multiple constructors in case user does not want to pass next
        Node(int data , Node* next) {
          this->data = data;
          this->next = next;
        }

        Node(int data) {
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

Node* deleteKthIndexNode(Node* head, int k) {

    if(head == NULL) return NULL;

    if( k==1) {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    int cnt=0;
    Node* temp = head;
    Node* prev = NULL;

    while( temp!=NULL) {

        cnt++;
        if(cnt==k) {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* deleteAValue(Node* head , int value) {

     if(head == NULL) return NULL;

    if( head->data == value) {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    int val;
    Node* temp = head;
    Node* prev = NULL;
    bool isPresent = false;

    while( temp!=NULL) {

        val = temp->data;
        if(val == value) {
            prev->next = prev->next->next;
            free(temp);
            isPresent = true;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    if(!isPresent) {
        cout << "value is not present in LL" << endl;
    }
    return head;
}

Node* insertAtStart(Node* head, int val) {


    Node* newHead;
    newHead->data = val;
    newHead->next = head;

    head = newHead;
    return newHead;

}

Node* insertAtKthIndex(Node* head, int val, int k) {

    //LL is empty , insert at first
    if(head == NULL) {
        if(k==1) {
            return new Node(val);
        }else{
            return NULL;
        }
    }

    //for k=1
    else if(head != NULL && k==1) {
        Node* newHead = new Node(val); // Allocate memory for new node
        newHead->next = head; // Point new node to the old head
        return newHead; // Return new head
    }

    //for k>=2
    bool validKvalue = false;
    int cnt=0;
    Node* temp = head;
    Node* newNode = new Node(val);
    while( temp!=NULL) {

        cnt++;
        if(cnt==k-1) {
            validKvalue = true;
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    if(!validKvalue) {
        cout << "Enter a valid position" << endl;
    }
    return head;


}

Node* insertAtLast(Node* head, int val) {

    //LL does not contain any element
    if(head == NULL) {
        return new Node(val);
    }
    Node* newNode = new Node(val);
    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// Node* insertAfterVal(Node* head, int el, int val) {
//     //LL is empty , insert at first
//     if(head == NULL) {
//         if(k==1) {
//             return new Node(val);
//         }else{
//             return NULL;
//         }
//     }

//     //for k=1
//     else if(head != NULL && k==1) {
//         Node* newHead = new Node(val); // Allocate memory for new node
//         newHead->next = head; // Point new node to the old head
//         return newHead; // Return new head
//     }

//     //for k>=2
//     bool validKvalue = false;
//     int cnt=0;
//     Node* temp = head;
//     Node* newNode = new Node(val);
//     while( temp!=NULL) {

//         cnt++;
//         if(cnt==k-1) {
//             validKvalue = true;
//             newNode->next = temp->next;
//             temp->next = newNode;
//             break;
//         }
//         temp = temp->next;
//     }
//     if(!validKvalue) {
//         cout << "Enter a valid position" << endl;
//     }
//     return head;
// }

Node* convertA2LL(vector<int> arr) {

    Node* head = new Node(arr[0], nullptr);
    Node* mover = head;
    int i=1;
    while( i<arr.size()) {

        Node* temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
        i++;
    }
    return head;
}

Node* sortLinkedList(Node* head) {


    //find length of linked list
    Node* temp = head;
    int len = 0;
    while(temp!=NULL) {
        len++;
        temp=temp->next;
    }

    //edge case
    if(len<=1) {
        cout << "ll of length 1 is already sorted" << endl;
        return head;
    }

    else if(len>1) {

        for(int i=len-1; i>=0; i--) {
            Node* prev = head;
            Node* front = head->next;
            for(int j=0; j<i; j++) {
                //swap
                if(prev->data > front->data) {
                    int temp = prev->data;
                    prev->data = front->data;
                    front->data = temp;
                }
                prev = front;
                front= front->next;
            }
        }
        return head;
    }
}

int main() {

    vector<int> arr = {-1,-2,4,3,2,1};

    // // 1st way to create a node
    // Node* x = new Node(4,nullptr); 
    // cout << x << endl;

    // // 2nd way to create a node
    // Node y = Node(5, nullptr);
    // cout << y.data << endl;

    //array to linkedlist

    Node* head = convertA2LL(arr);

    // printLinkedList(head);

    // head = deleteKthIndexNode(head, 3);
    // printLinkedList(head);

    // head = deleteAValue(head, 10);
    // printLinkedList(head);

    // head = insertAtStart(head, 100);
    // printLinkedList(head);

    // head = insertAtLast(head,400);
    // printLinkedList(head);

    head = insertAtKthIndex(head, 1000, 1);
    // printLinkedList(head);
    
    //sort linkedlist
    head = sortLinkedList(head);
    printLinkedList(head);

    

    return 0;
}