/*
private -> it can't be inherited from base class.
protected -> private that can be inherited.

*/

#include<iostream>
using namespace std;
class Base
{
private:
    int b;
protected:
    int a;
public:
    void setdata(int a, int b){
        this->a=a;
        this->b=b;
    }
};

class Derived : protected Base
{
    int c;
    public:
    void set_data(int x ,int y){
        setdata(x,y);
    }
    void display()
    {
        cout<<"a value is:\t"<<a;
    }
};

int main(){
    Derived der;
    der.set_data(10, 20);
    der.display();
    return 0;
}