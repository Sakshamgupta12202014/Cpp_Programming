#include<iostream>
using namespace std;

int main(){
    /* IMPLICIT CONVERSION*/
    int x=3.14;
    cout << x<<endl; /* 3 is the output , this is the example of implicit conversion.*/
    char z=64;
    cout << z <<endl; /* @ is the output , this is the example of implicit conversion */
    cout << char(z);

    /* EXPLICIT CONVERSION*/
    int marks=8;
    int tot_marks=10;
    double score=marks/tot_marks;

    cout << score<<"%"<<endl;  /* the output is 0 as  int divided by int is integer so we have explicitly
    convert it into double */

    double score1=marks/double(tot_marks); /* this is known as explicit conversion*/
    cout << score1<<"%";

    return 0;
}