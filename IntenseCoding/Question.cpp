#include<iostream>
#include<cstdlib>
using namespace std;

//Question 1.
// class Vehicle
// {
// protected:
//     float mileage;
//     float price;
//     Vehicle()
//     {
//         cout<<"Enter mileage for car: ";
//         cin>>mileage;
//         cout<<"Enter price for car: ";
//         cin>>price;
//     }
// };

// class Car :public Vehicle 
// {
// protected:
//     int warranty;
//     int seating_capacity;
//     Car()
//     {
//         cout<<"Enter warranty of the car: ";
//         cin>>warranty;
//         cout<<"Enter seating_capacity of the car: ";
//         cin>>seating_capacity;
//     }

// };

// class Bike : public Vehicle
// {
// public:
//     int No_Of_cylinders;
//     int gears;
// };

// class Audi : public Car
// {
// public:
//     int model_type;
//     Audi()
//     {
//         cout<<"Enter model_type of the car: ";
//         cin>>model_type;
//     }

//     void print_info()
//     {
//         cout<<"displaying the information:"<<endl
//         <<"mileage:\t"<<mileage<<endl
//         <<"price:  \t"<<price<<endl
//         <<"warranty:\t"<<warranty<<endl
//         <<"seating capacity:\t"<<seating_capacity<<endl
//         <<"model_type:\t"<<model_type;
//     }
// };

// class Ford : public Car
// {
// public:
//     int model_type; 
// };

// class Bajaj : public Bike
// {
// public:
//     string make_type;
// };

// class TVS: public Bike
// {
// public:
//     string make_type;
// };

// int main(){
//     Audi A1;
//     A1.print_info();
//     // ford F1;

//     return 0;
// }

/*Question 2.
    FUNCTION OVERRIDING.*/
// class A{
//     // protected:
//     public:
//         void show()
//         {
//             cout<<"I am in class A!!!!!!!"<<endl;
//         }
// };
// class B{
//     // protected:
//     public:
//         void show(){
//             cout<<"I am in class B!!!!!!!!"<<endl;
//         }
// };

// class C : public A,public B{
//     public:
//         void show()
//         {
//             cout<<"I am in class C !!!!!!!!!!!"<<endl;
//         }
// };

// int main()
// {
//     C obj;
//     obj.show();
// }

#include <iostream>
using namespace std;

class ParentX {
protected:
    int x;
public:
    ParentX() : x(19) {}
};

class ChildY : public ParentX {
public:
    int y;
    ChildY() : y(20) {}
};

int main() {
    ChildY* ptr = new ChildY;
    cout << ptr->x << ", " << ptr->y;       //x is protected in the class so it can't
    return 0;                               //be accessed from outside of the class 
}