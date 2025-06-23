// we have used inline functions , default variables , reference variables.
// Remember inlining is a request to compiler not a command.

#include<cmath>
#include <iostream>
#include<iomanip>
#include<ctgmath>
using namespace std;

int sum(int a, int b = 8)
{
    return a + b;
}

/*Function using reference parameters.*/
inline void product(int &x, int &y)
{
    x *= y;
    // return x*y;
    return;
}

/*Use of Const keyword will resist any change in the x variable. */
int swap(const int *x, int *y)
{
    int temp = *x;
    // *x=*y;   // value at adderess will not be changed.due to const keyword.
    *y = temp;
}

/*Using static keyword ,loop , recursion inside inline function*/
inline int natural(int n)
{
    static int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    if(n<1)
        return sum;
    natural(n-1);
}

/*Using inline function in classes .*/
class operation
{
    int a, b, add,diff,prod;
    float div;

public:
    void get();
    int sum();
    int difference();
    int product();
    float division();

};
inline void operation::get(){
    cout << "Enter first value:";
    cin >> a;
    cout << "Enter second value:";
    cin >> b;
}
inline int operation::sum()
{
    add=a+b;
    return add;
}

inline int operation::difference()
{
    diff=a-b;
    return diff;
}
inline int operation::product()
{
    prod=a*b;
    return prod;
}
inline float operation::division()
{
    div=(float)a/b;
    cout<<fixed<<setprecision(3)<<div<<endl; // make sure you include <iomanip> header file.
    cout<<"Rounded value of result is: "<<lround(div); // make sure you include <cmath> header file.
    // return div;
}

int main()
{
    // int x, y;
    // cin >> x >> y;
    // cout << sum(x, y);
    // cout << sum(x);
    // product(x, y);
    // cout << x;
    // cout<<natural(5);

    cout << "Program using inline function\n";
    operation s;
    s.get();
    cout<<s.sum()<<endl;
    cout<<s.difference()<<endl;
    cout<<s.product()<<endl;
    // cout<<s.division();
    s.division();

    // cout<<sizeof(long int);
    // cout<<endl<<sizeof(long long int);
    return 0;
}
