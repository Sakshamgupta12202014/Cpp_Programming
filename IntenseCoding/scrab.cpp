#include <iostream>
using namespace std;

//Constructor Handling.
class A
{
protected:
    int a = 50;
public:
    A(int x)
    {
        a += x;
        cout << "the value of a is " << a << endl;        
    }
};

class B : public A
{
protected:
    int b = 60;
public:
    B(int p, int q) : A(q)
    {
        b += p;
        cout << "the value of b is " << b << endl;
    }
};

int main()
{
    B bb(30,50);
}


// class A
// {
// public:
//     A(int a,int b,int c)
//     {
//         cout << "i am in A!!!" << endl;
//     }
// };

// class B : public A
// {
// public:
//     B(int x, int y,int z) : A(x,y,z)
//     {
//         cout << "I am in B!!" << endl;
//     };
// };

// class C : public B
// {
// public:
//     C(int a1, int b1,int c1) : B(a1,b1,c1)
//     {
//         cout << "i am in C" << endl;
//     }
// };

// int main()
// {
//     C m(10,30,40);

// }



// struct student
// {
//     char name[10];
//     int age;
//     float marks;
// };

// void enter(char* name , int* age , float* marks)
// {
//     printf("Enter the name of the student: ");
//     scanf("%s",name);
//     printf("Enter the age of the student: ");
//     scanf("%d",age);
//     printf("Enter the marks of the student: ");
//     scanf("%f",marks);
// }

// int main(){
//     struct student s;
//     enter(s.name , &s.age , &s.marks);
    
// }



// class Quantity {
// public:
// int value;
// Quantity (int v): value(v) {}
// operator string() {
// return to _string(value) +
// "units";
// }
// };
// int main() {
// Quantity qty (133);
// string result = qty;
// cout << result;
// return 0;
// }
// #include<iostream>
// using namespace std;
// // class item{
// // public:
// //     string name;
// //     item(){
// //         // cout<<name;
// //     }
// // };
// int main()
// {
//     getline(cin,"saksham");
//     // item i;
// }

// #include <iostream>
// using namespace std;
// class Cube {
// public:
//     Cube(double s) : side(s) {}
//     double getVolume() { return side * side * side; }
// private:
//     double side;
// };
// int main() {
//     Cube* c1 = new Cube(2.0);
//     Cube* c2 = c1;
//     delete c1;
//     std::cout << c2->getVolume();
//     return 0;
// }


// #include <iostream>
// class MyClass {
// public:
//     int value;
//     MyClass(int num) {
//         value = num;
//     }
//     ~MyClass() {
//         std::cout << "Destructor called for value: " << value << std::endl;
//     }
// };
// int main() {
//     MyClass* obj1 = new MyClass(5);
//     MyClass* obj2 = new MyClass(10);
//     delete obj1;            //delete will call the destructor of the class.
//     std::cout << "obj2->value: " << obj2->value << std::endl;
//     MyClass* obj3 = new MyClass(15);
//     delete obj2;
//     delete obj3;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Student {
// public:
//     Student(const char* n) : name(n) {}
//     const char* getName() { return name; }
// private:
//     const char* name;
// };
// int main() {
//     Student* s = new Student("Taylor");
//     delete s;
//     std::cout << s->getName();
//     return 0;
// }
