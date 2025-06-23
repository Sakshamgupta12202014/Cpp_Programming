#include <iostream>
// #include<stdio.h>
using namespace std;

struct Employee
{
    int x = 10;
    float f = 3.14;
    string s = "saksham";
};
struct Boss
{
}b;

union employee
{
    int x;
    float f;
    string s="s";
};

int main()
{
    Employee e;
    // cout<<e.x<<endl;
    // cout<<e.f<<endl;
    // cout<<e.s;
    cout<<sizeof(e)<<endl;
    cout << sizeof(b)<<endl;
    cout<<sizeof(employee);
    // printf("%d\n",sizeof(b));
    // printf("%d",sizeof(e));
    return 0;
}