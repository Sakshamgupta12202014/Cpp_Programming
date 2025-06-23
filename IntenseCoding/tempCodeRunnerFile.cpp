/*Constructor Overloading.*/

#include<iostream>
#include<string>
using namespace std;

const double pi=3.14159;
class AreaOfCircle
{
    float r;
    public:
        AreaOfCircle(float radius){
            cout<<"\nThe area of the circle is: "<<pi*radius*radius<<endl;
        }
        AreaOfCircle(){
            cout<<"\nEnter the value of radius: ";
            cin>>r;
            cout<<"\nArea of the circle is: "<<pi*r*r;
        }
        AreaOfCircle(int radius){
            cout<<"\nInteger radius";
            cout<<"\nThe area of the circle is: "<<pi*radius*radius;
        }
};

int main(){
    AreaOfCircle a;
    AreaOfCircle b(3);
    return 0;
}