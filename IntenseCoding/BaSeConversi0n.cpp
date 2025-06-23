/*We have used setfill() , setw() , setbase() , hex , oct, dec.*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int x;
    // cout<<"Enter a hexadecimal number: ";
    // cin>>hex>>x;
    // cout<<"The decimal representation of "<<x<<" is "<<x<<endl;
    // cout<<"The hexadecimal representation of "<<x<<" is "<<hex<<x<<endl;
    // cout<<"The octal representation of "<<x<<" is "<<oct<<x<<endl;




    int age = 22,rollno = 9101; cout<<setfill('#');
    cout<<setw(4)<<age<<setw(6)<<rollno<<endl;
    cout<<setw(6)<<age<<setw(8)<<rollno;


    cout<<setw(4)<<age<<setw(6)<<rollno<<endl;
    cout<<setw(6)<<age<<setw(8)<<rollno;


    return 0;
}