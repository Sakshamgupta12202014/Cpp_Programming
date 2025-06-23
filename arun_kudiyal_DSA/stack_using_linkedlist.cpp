#include <bits/stdc++.h>
using namespace std;


class Node{
public:
    int data;
    Node* next;
};

Node* top = nullptr;

class StackUsingLL{
    // LIFO
    // 1 push(int elt)
    // 2 pop()
    // 3 isEmpty()
    // 4 top()
    public:
    void push(int val){

        // ❗Problem:
        //     Node newNode; is a local variable, stored in the stack frame of the function.
        //     Once push() returns, newNode is destroyed, so top ends up pointing to invalid memory.
        //     Then pop() will access that dangling pointer, causing undefined behavior.
        // Node newNode;
        // newNode.data = val;
        // newNode.next = top;
        // top = &newNode;

        Node *newNode = new Node();   // allocate on heap
        newNode->data = val;
        newNode->next = top;
        top = newNode; // top points to valid memory now
    }
    int pop(){
        if(top == nullptr) {
            cout << "Stack is empty " << endl;
            return INT_MIN;
        }

        Node *toDelete = top;   // since top is a pointer so toDelete should be pointer
        top = top->next;
        int value = toDelete->data;
        delete toDelete;
        return value;

        // ⚠️ If you dont use delete:
        //         The memory for the Node object on the heap remains allocated.
        //         Over time, if pop() is called many times, you'll accumulate memory leaks.
        //         That means memory is being consumed and never given back to the system — very bad in long-running apps.
    }
    bool isEmpty(){
        if(top==nullptr) return true;
        return false;
    }
    int getTop(){
        return top->data;    // since top is pointer so -> is used to access data from top
    }
};

Node* head = new Node();   // head is a pointer 
// Node top;   // top is a object of Node type 


int main() {

    
    // head->data=20;
    // head->next=nullptr;
    // cout << head->data << "  " << head->next << endl; 

    // top.data = 0;
    // top.next = head;
    // cout << top.data << "  " << top.next << endl; 
    StackUsingLL stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);

    int poppedElem = stack.pop();
    cout << "popped : " << poppedElem << endl;
    poppedElem = stack.pop();
    cout << "popped : " << poppedElem << endl;

    int topElem = stack.getTop();
    bool isEmp = stack.isEmpty();

    cout << "top : " << topElem << " is stack empty : " << isEmp << endl;
    return 0;
}

// cout << &top << endl;
// Node* top = NULL;
// Node obj;