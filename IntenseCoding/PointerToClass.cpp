/*
    ->* is used when we have pointers to both object and the member.
    syntax of dereferencing :- Pointer_Object->*Pointer_member.

    .* is used when we have pointer with only member.
    syntax of dereferencing :- object.*Pointer_member.

    How to call a member function using pointer?

    syntax :- (Object.*Pointer_function)(int, int) .
*/

#include<iostream>
using namespace std;
class M
{
    public:
    int x;
    int y;

    void set_xy(int a, int b){
        x=a;
        y=b;
    }
    friend int Sum(M);
};
int Sum(M m)
{
    int M::*px=&M::x;
    int M::*py=&M::y;
    M *p=&m;

    int sum=m.*px + p->*py;
    return sum;
}
int main(){
    M n;
    //pointer to member function.
    void (M::*ptf)(int, int)=&M::set_xy;
    //calling the member function using pointer.
    (n.*ptf)(10 , 30);
    cout<<"Sum of the number : "<<Sum(n);

    M *op=&n;
    //calling the member function using pointer to object.
    (op->*ptf)(10 ,30);
    cout<<"\nSum of the number : "<<Sum(n);



    return 0;
}

// #include <iostream>

// using namespace std;

// class X
// {
// public:
//     int a;
//     void f(int b)
//     {
//         cout << "The value of b is " << b << endl;
//     }
// };
// int main()
// {
//     // declare pointer to data member
//     int X::*ptr = &X::a;

//     // declare a pointer to member function  void (X::* ptfptr) (int) = &X::f;
//     void (X::*ptf)(int)=&X::f;

//     // create an object of class type X
//     X x;
//     x.*ptr=10000;

//     cout << "The value of a is " << x.*ptr << endl;

//     // call member function;
//     (x.*ptf) (20);

// }
