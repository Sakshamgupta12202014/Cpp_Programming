#include<iostream>
using namespace std;
/* there are two ways to use typedef
these are --->
1.using keyword typedef.
2.using keyword using. */
//typedef int number;
using number=int;   /*using keyword works better with templates.*/


int main(){
    number x=2;
    cout << x << endl;
    float a=3;
    cout << a;
    return 0;
}