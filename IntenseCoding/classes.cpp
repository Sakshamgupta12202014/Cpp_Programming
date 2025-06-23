#include <iostream>
#include <iomanip>

using namespace std;

const double pi = 3.14;

class Circle
{
    double radius;

public:
    double AreaofCircle(double radius)
    {
        return pi * radius * radius;
    }
};

// int main(void){
//     Circle c;
//     // cout<<fixed<<setprecision(3)<<c.AreaofCircle(3.55)<<"\n";
//     // cout<<c.AreaofCircle(3)<<"\n";
//     cout<<sizeof(Circle);
// }

class item
{
    int number; /*number and cost are private members.*/
    float cost;

public:
    void getdata(int a, float b);
    void putdata(void)
    {
        cout << "Number :" << number << "\n";
        cout << "cost: " << cost << "\n";
    }
};

void item ::getdata(int a, float b)
{
    number = a;
    cost = b;
}

int main(){
    // item x;
    // cout<<"\nobject x:"<<"\n";
    // x.getdata(100,399.54);
    // x.putdata();

    // item y;
    // cout<<"\nobject y:"<<"\n";
    // y.getdata(300,175.5);
    // y.putdata();
    cout<<"the size of object of class item: "<<sizeof(item);
    return 0;
}

struct point
{
    int x;
    int y;
};

class sphere
{
public:
    point p;

    int radius;
};

// int main(){
//     sphere s;
//     s.radius=3;
//     s.p.x=10;
//     s.p.y=30;

//     cout<<c.radius<<" "<<s.p.x;
// }

class Student
{
    static int count;
    int marks[5];

public:
    int setmarks()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
};
