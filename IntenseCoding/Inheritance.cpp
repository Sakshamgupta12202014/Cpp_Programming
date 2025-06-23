/*
What is the difference between private and protected access modifiers?
private members cant be accessed outside the class while protected members
can be accessed in the inherited classes.

Default visibility mode is private. 

*/

#include<iostream>
using namespace std;

class Person
{
    int id;
    string name;
    public:
    void set_p();
    void display_p();
};

void Person :: set_p(){
    cout<<"Enter id: ";
    cin>>id;
    cin.ignore();
    cout<<"Enter name: ";
    getline(cin,name);
}
void Person :: display_p()
{
    cout<<"id is: "<<id<<"\tand name is: "<<name<<endl;
}

class Student:private Person
{
    string course;
    int fee;

    public:
    void set_s();
    void display_s();
};
void Student :: set_s()
{
    set_p();
    cout<<"Enter the course name: ";
    getline(cin,course);
    cout<<"Enter the fees : ";
    cin>>fee;
}
void Student :: display_s()
{
    display_p();
    cout<<"Course is : "<<course<<"\tfees is: "<<fee<<endl;
}

int main(){
    Student s;
    // s.set_p();
    s.set_s();
    s.display_s();
    return 0;
}