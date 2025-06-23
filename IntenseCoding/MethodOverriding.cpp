/*1- Calling Overriden function using Pointer!!! 
  2- use of virtual function in Base class.
  3- Pure virtual function--> "virtal return_type func_name()=0" 
  4- Virtual function comes under--> RUN TIME POLYMORPHISM  */

#include<iostream>
using namespace std;

// class A{
// public:
//     virtual void show()
//     {
//         cout<<"I am in class A!!!!!!!"<<endl;
//     }
// };
// class B : virtual public A{
// public:
//     void show(){
//         cout<<"I am in class B!!!!!!!!"<<endl;
//     }
// };

// int main()
// {
//     B obj;
//     // obj.A::show();      //This is called early binding.
//     // obj.show();         //its first preference is local show function,then outside of its scope.  
//     A *ptr=&obj;           //Without using Virtual keyword it will call class A's function, 
//     ptr->show();           //if using it will call on the basis of object assigned to the pointer.              
// }


class Base 
{
public:
    int x;
    Base() { x = 5; }
    int calculate() { return x + 3; }
};

class Derived : public Base 
{
public:
    int x;
    Derived() { x = 2; }
    int calculate() { return Base::calculate() - x; }
};

int main() {
    Derived obj;
    cout << obj.calculate();
    return 0;
}