#include <bits/stdc++.h>

using namespace std;

class A {
public:
    int num1;

    // A(){
    //     cout << "A's constructor"<< endl;
    // }
    A(int a){
        this->num1 = a;
    }

    void display(){
        cout << "Inside A value of num1 is " << num1 << endl;
    }

};

class B : public A{
public:
    int num2;

    // B(){
    //     cout << "B's constructor" << endl;
    // }
    B(int a , int b) : A(a){
        this->num2 = b;
    }

    void display(){
        cout << "Inside B value of num2 is " << num2 << endl;
    }
};

int main() {
    
    A* objA = new A(10);
    // objA->display();
    
    // B* objB = new B(10,20);
    // cout << objB->num1 << endl;
    // cout << objB->num2 << endl;

    B* objB2 = new B(10, 20);
    // objB2->display();

    A* myObj = new B(30,40);
    myObj->display();    
    
    return 0;
}