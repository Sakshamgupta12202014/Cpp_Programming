#include<iostream>
using namespace std;
// class A{
//     int x;
//     public:
//     A()
//     {
//         cout<<"Calling base class Default constructor!!"<<endl;
//     }
//     A(int a)
//     {
//         cout<<"Calling base class parameterised constructor!!"<<endl;
//     }
//     // ~A()
//     // {
//     //     cout<<"Calling Base class destructor!!"<<endl;
//     // }
// };
// class B:public A{
//     // int a=x;
//     public:
//     B(){
//         cout<<"Calling derived class default constructor!!"<<endl;
//     }
//     // B(int b)
//     // {
//     //     cout<<"Calling derived class parameterised Constructor!!"<<endl;
//     // }
//     // ~B(){
//     //     cout<<"Calling derived class destructor!!"<<endl;
//     // }
// };

// int main(){
//     B obj1;
//     // B obj2(1);
//     return 0;
// }

class A
{
protected:
    int a;
public:
    // A(){
    //     a=50;
    // }
    A(int x){
        a+=x;
    }
    // ~A(){cout<<"\nObjects are destroyed!! in A ";}
};

class B 
{
protected:
    int b;
public:
    // B() {}
    B(int p) {
        b=p;
    }
    // ~B(){cout<<"\nObjects are destroyed!! in B ";}
};

class C : public A, public B
{
protected:
    int c;
public:
    C(int p,int q,int r):B(p), A(q) {
        c=r;
    }
};

int main()
{
    // C cc(3,4,5);
    // B bb(30);
    // B bb;
    // bb.display();
    C cc(3,4,5);

}

