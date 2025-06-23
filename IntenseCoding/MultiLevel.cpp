#include<iostream>
using namespace std;

class Student
{
protected:
    int roll_no;
public:
    void get_no(int);
    void put_no();
};
void Student :: get_no(int x)
{
    roll_no=a;
}
void Student :: put_no()
{
    cout<<"The roll no is: "<<roll_no<<endl;
}
class Test:public Student
{
protected:
    float sub1, sub2;
public:
    void get_marks(float,float);
    void put_marks(void);
};
void Test :: get_marks(float a,float b)
{
    sub1=x;
    sub2=y;
}
void Test :: put_marks()
{
    cout<<"marks in sub1: "<<sub1<<
    endl<<"marks in sub2: "<<sub2;
}
class Result:public Test
{
    float total;
public:
    void display();
};
void Result :: display()
{
    cout<<
}

int main(){
    Result student1;
    Student1.get_no(102);
    Student1.get_marks(30.011,49.98);
    Student1.display();
    return 0;
}