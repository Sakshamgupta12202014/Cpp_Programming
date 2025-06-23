#include <iostream>
using namespace std;

// int main();
// int sum(int x, int y)
// {
//     x = 30;
//     y = 50;
//     int M;
// //     M=main();
// //     cout<<"The value returned by main is "<<M;
// //     return x;
// }
// int main()
// {
//     int x = 10;
//     sum(x, x);
//     // cout << sum::y;
//     return 10;
// }

int func1(int* ptr)
{
    cout<<"The value at address "<<(int)ptr<<" is "<<*ptr;
    return 0;
}

int main()
{
    int x=10;
    int* p=&x;
    func1(p);
}