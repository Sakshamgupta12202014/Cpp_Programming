/*
Pointers to derived classes Aur late binding and  early binding....
 */
 
#include<iostream>
using namespace std;

// class A
// {
// public:
//     int x;
//     void show()
//     {
//         cout << "Hello world!!" << endl;
//     }
// };
// class B : public A
// {
// public:
//     int y;
//     void display()
//     {
//         cout << "Hello class!!" << endl;
//     }
// };

// int main(){
//     A *ptr = new B;
//     ptr -> show();
//     cout << ptr -> y << endl;
//     ptr -> display();
//     // B *ptr1 = new A;       //throws error.
//     B *p = new B;
//     p -> display();
//     p -> show();
//     cout << p->x << endl;
//     return 0;
// }

// class Base
// {
// public:
// 	int var_base = 5;
// 	virtual void display()
// 	{
// 		cout << "Base class variable " << var_base << endl;
// 	}
// };

// class Derived : public Base
// {
// public:
// 	int var_derived = 10;
// 	void display()
// 	{
// 		cout << "derived class variable " << var_derived << endl;
// 		cout << "Base class variable " << var_base << endl;

// 	}
// };

// int main()
// {
// 	Base *base_pointer;
// 	Derived *derived_pointer;
// 	Base base_obj;
// 	Derived derived_obj;


// 	base_pointer = &derived_obj;
// 	derived_pointer = &derived_obj;	
// 	// derived_pointer = &base_obj;							//throws error


// 	base_pointer -> display();						//Late binding ---> calls display function of the base class
// 	derived_pointer -> display();					//Late binding ---> calls display function of the derived class


// 	// cout << base_pointer -> var_derived << endl;          //throws error
// 	cout << base_pointer -> var_base << endl;

// }

/*-------------------PURE VIRTUAL FUNCTION----------------*/

class Base
{
protected:
	int var_base = 10;
public:
	virtual void print_var() = 0;          //it is mandetory to override this function in derived classes!!!!!!
};

class Derived : public Base
{
protected:
	int var_derived = 30;
public:
	Derived(){};
	void print_var()
	{
		cout << "value of derived variable " << var_derived << endl;
	}
};

int main()
{
	Derived obj;
}