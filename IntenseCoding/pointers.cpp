#include<iostream>
using namespace std;

int main(){
    float a=10.45;
    float* p=&a;
    // cout<<"The address of var a is :"<<int(&a)<<endl;
    // cout<<"The address of var a using pointer: "<<int(p)<<endl;
    // cout<<"The value of a is: "<<*p<<endl;
    float** ptr=&p;
    cout<<"The address of var a is :"<<int(&a)<<endl;
    cout<<"The value in ptr is: "<<int(*ptr)<<endl;
    // cout<<"The address of pointer p is: "<<int(&ptr)<<endl;
    cout <<"the value of a is : "<<**ptr<<endl;
    return 0;
}