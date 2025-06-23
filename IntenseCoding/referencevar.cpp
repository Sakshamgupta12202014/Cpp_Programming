#include<iostream>
using namespace std;

int main(){
    int a=10;
    int &b=a;
    int* x=&a;
    cout<<sizeof(a)<<"    "<<(int)&a<<endl;
    cout<<sizeof(b)<<"    "<<(int)&b<<endl;
    cout<<sizeof(x)<<"    "<<(int)&x<<endl;
    return 0;
}