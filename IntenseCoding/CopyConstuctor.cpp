// #include <iostream>
// #include<cstring>
// using namespace std;

// class student
// {
//   int roll_no;
//   char name[50];
//   double fees;

// public:
//   student(int, char[], double);
//   friend void display(student);
//   student(student &t) // copy constructor
//   {
//     roll_no = t.roll_no;
//     strcpy(name, t.name);
//     fees = t.fees;
//   }

// };

// student :: student(int roll, char Name[] , double fee)
// {
//     roll_no=roll;
//     strcpy(name , Name);
//     fees=fee;
// }
// void display(student s)
// {
//   cout<<s.name<<"    "<<s.roll_no<<"    "<<s.fees<<endl;
// }

// int main()
// {
//   student s(1,"saksham",1000);
//   display(s);

//   student s1(s);
//   display(s1);
//   return 0;
// }


// Implicit copy constructor Calling .
#include <iostream>
using namespace std;
 
class Sample {
    int id;
 
public:
    void init(int x) { id = x; }
    void display() { cout << endl << "ID=" << id; }
};
 
int main()
{
    Sample obj1;
    obj1.init(10);
    obj1.display();
 
    // Implicit Copy Constructor Calling
    Sample obj2(obj1); // or obj2=obj1;
    obj2.display();
    return 0;
}


// Explicit copy constructor Calling .
#include <iostream>
using namespace std;
 
class Sample {
    int id;
 
public:
    Sample(){}
    void init(int x) { id = x; }
    void display() { cout << endl << "ID=" << id; }
    Sample(Sample &s){
      id=s.id;
    }
};
 
int main()
{
    Sample obj1;
    obj1.init(10);
    obj1.display();
 
    // Explicit Copy Constructor Calling.
    Sample obj2(obj1); // or obj2=obj1;
    obj2.display();
    return 0;
}