#include<iostream>
using namespace std;

class Student
{
protected:
    int roll_no ;
public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "Roll number is " << roll_no << endl;
    }
};

class Test : public virtual Student
{
protected:
    float maths , physics;
public:
    void set_marks(float a, float b)
    {
        maths = a;
        physics = b;
    }
    void print_marks()
    {
        cout << "Marks in maths is " << maths << "  Marks in physics is " << physics << endl; 
    }
};

class Sports : public virtual Student
{
protected:
    float score;
public:
    void set_score(float score)
    {
        this->score = score; 
    }
    void print_score()
    {
        cout << "Score is " << this->score << endl;
    }
    
};

class Result : public Test, public Sports
{
private:
    float total;
public:
    void display()
    {
        total = score + maths + physics;
        print_number();
        print_marks();
        print_score();
        cout << "Total marks are " << total << endl;
    }

};

int main(){
    Result saksham;
    saksham.set_number(43);
    saksham.set_marks(67.78, 56.67);
    saksham.set_score(90);
    saksham.display();
    
    return 0;
}