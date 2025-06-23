#include<iostream>
using namespace std;

struct student
{
    char name[10];
    int age;
    float marks;
};

void display(student *s)
{
    cout<<s->name<<"  "<<s->age<<"  "<<s->marks<<endl;
}
void input(student *s)
{
    cout<<"Enter name of the student: ";
    cin>>s->name;
    cout<<"Enter age of the student: ";
    cin>>s->age;
    cout<<"Enter the marks of student: ";
    cin>>s->marks;
}

void enter(char* name , int* age , float* marks)
{
    cout<<"Enter the name of the student: ";
    cin>>name;
    cout<<"Enter the age of the student: ";
    cin>>*age;
    cout<<"Enter the marks of the student: ";
    cin>>*marks;
}

int main(){
    // st s1={"saksham",19,83.5};
    // print(s1.name,s1.age,s1.marks);
    
    struct student s2;
    // enter(s2.name ,&s2.age , &s2.marks);
    input(&s2);
    display(&s2);
    return 0;
}