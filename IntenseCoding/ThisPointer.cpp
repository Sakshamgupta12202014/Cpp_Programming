#include<iostream>
using namespace std;

class A
{
private:
    int x;
    int y;
    int z;
public:
    A& set(int x)
    {
        this->x=x;
        return *this;   
    }

    void sum()
    {
        cout<<"The value is : "<<x<<endl;
    }
};

int main(){
    A obj;
    obj.set(10).sum();    //since set function returns an object we can directly use sum function.
    // obj.print();
    return 0;
}