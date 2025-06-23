#include<iostream>
#include<string>
using namespace std;

int main(){
    char c1='a';
    // char *ptr=&c1;
    // cout<<(void *)ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<c1<<endl;

    char *p="abcd";
    // p[0]='X';
    // cout<<p[0]<<endl;
    // cout<<p<<endl;
    // cout<<&p<<endl;    
    // cout<<&p<<endl;    
    // cout<<&p<<endl;    


    char c3[]="abcd";    //automatically adds null character at the end.
    c3[0]='X';
    cout<<c3<<endl;
    cout<<sizeof(c3)<<endl;    //5
    //c3[]="newe";     //throws an error.


    // char c4[]={'a','b','c','d'};    //doesn't add null character at the end.
    // cout<<c4<<endl;                 //shows garbage characters with the original char.
    // cout<<sizeof(c4)<<endl;      //4

    // char arr[100];
    // cin.getline(arr,100);
    // cout<<arr;
    // cin.ignore();    //to clear the buffer for next input.

    return 0;
}