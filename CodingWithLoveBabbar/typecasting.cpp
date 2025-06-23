#include<iostream>

using namespace std;

int main() {

    float num = 65.45;
    char ch = num;
    cout << ch << endl;

    char c = (char)num;
    cout << c << endl;

    double doublepi = 3.14159265;
    int intpi = doublepi;   // int intpi = (int)doublepi
    cout << intpi << endl;

    int a = 10;
    int b = 3;
    float div = a/b;

    cout << div << endl;

    float div2 = (float)a/b;
    cout << div2 << endl;

    
}