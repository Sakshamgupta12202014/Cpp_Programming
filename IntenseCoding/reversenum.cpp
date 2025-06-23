/**
 * This C++ program takes a digit number as input and reverses it.
 * 
 * return The program is returning 0.
 */
#include<iostream>
// #include<cmath>


using namespace std;

int main(){
    int num,rev=0,rem;
    cout<<"Enter any digit number: ";
    cin>>num;
    int num3=num;
    while (num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    cout<<"Number after reversal: ";
    cout<<rev;
    if(rev==num3)
        cout<<"\nThe number is palindrome: ";
    return 0;
}