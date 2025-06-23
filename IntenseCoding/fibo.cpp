/**
 * This C++ program calculates and prints the Fibonacci series up to a given number.
 * 
 * return The function `fibonacci` returns the nth number in the Fibonacci sequence.
 */
#include<iostream>
using namespace std;

int fibonacci(int n);
int a=0,b=1;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<fibonacci(i)<<"    ";
    }
    return 0;
}
int fibonacci(int n)
{
    int temp,x;
    if(n==1)
        return 0;
    else if(n==2){
        return 1;
    }
    else if(n>2){
        x=a+b;
        temp=a;
        a=b;
        b=temp+b;
        return x;
    }
}