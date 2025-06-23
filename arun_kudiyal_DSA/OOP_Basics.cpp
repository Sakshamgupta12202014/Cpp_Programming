#include <iostream>
using namespace std;


// abstract classes and virtual function

// virtual functions are those function which are written in base class using (virtual keyword) and are meant to be redefined in derived classes 

// A pure virtual function is a function that has no implementation in the base class and is meant to be overridden by derived classes.


// abstract class is like khayaal which act as a BLUEPRINT to the other classes (it helps other classes to implement with the help of abstract methods declared inside abstract class)

// abstract classes cannot be instantiated 

// A class is made abstract by having at least one pure virtual function.

class Shape { // abstract class 

    int noOfSides = 0;
    virtual void draw() = 0;  // pure virtual functions 
    // The = 0 syntax tells the compiler that this is a pure virtual function.

    virtual void perimeter() = 0;

    void setColor(string c) {  // Regular method
        color = c;
    }
};


class Shape {
protected:
    string color;

public:
    Shape(string c) : color(c) {}

    void setColor(string c) {
        color = c;
    }

    string getColor() const {
        return color;
    }

    virtual void draw() = 0; // abstract method
};


class Circle : public Shape {
    int radius;

public:
    Circle(string c, int r) : Shape(c), radius(r) {}

    void draw() override {
        cout << "Drawing a " << color << " circle with radius " << radius << endl;
    }
};

int main() {
    Circle c("red", 5);
    c.draw(); // Output: Drawing a red circle with radius 5

    c.setColor("blue"); // changing the color
    c.draw(); // Output: Drawing a blue circle with radius 5

    return 0;
}




class Car {
public:
    string brand;
    int year;


    void start() {
        cout << brand << " started!" << endl;
    }

    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car myCar;
    // myCar.brand = "Toyota";
    // myCar.year = 2020;
    // myCar.start();          
    myCar.displayInfo();      // default initialization is not present in cpp unlike java 

    Car* car2 = new Car();
    car2->displayInfo();

    return 0;
}


