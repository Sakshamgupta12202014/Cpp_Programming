#include <iostream>
#include <string>
using namespace std;

class Complex
{
    int a, b;
    friend void Printnumber(Complex o1);
public:
    Complex(void);
};

Complex :: Complex(void)
{
    static int i=0;
    cout<<"Enter digits of "<<++i<<endl;
    cin>>a;
    cin>>b;
}

void Printnumber(Complex o1)
{
    cout<<"The number is "<<o1.a<<"+"<<o1.b<<"i "<<endl;
}

int main()
{
    // int a = 10;
    // void *ptr = &a;
    // cout << "The value of a is " << *(int *)ptr << endl;

    // char alpha = 'a';
    // ptr = &alpha;
    // cout << "The character stored in alpha is " << *(char *)ptr;

    Complex c1, c2;
    Printnumber(c1);
    Printnumber(c2);
    
    return 0;
}