#include<iostream>
using namespace std;

class demo
{
    int num;
public:
    demo(){}
    demo(int x);
    int display();
    //overloading "+" operator.
    demo operator+(demo obj){
        demo x;
        x.num=num + obj.num;
        return x;
    }
    //Overloading "prefix increment or prefix decrement" operator.
    void operator++(){
        ++num;
    }
    void operator--(){
        --num;
    }
    //Overloading "postfix increment or postfix decrement" operator.
    void operator++(int)
    {
        num++;
    }
    void operator--(int)
    {
        num--;
    }
    //overloading "+=" operator.
    void operator+=(demo obj){
        num=num+obj.num;
    }
};
demo :: demo(int x)
{
    num=x;
}
int demo :: display()
{
    return num;
}


int main(){
    demo a,b,c;        //this will throw an error if default constructor is not added.
    b=demo(10);
    c=demo(20);
    a=b+c;
    cout<<"Sum : "<<a.display()<<endl;

    ++a;
    cout<<"value after increment is: "<<a.display()<<endl;

    --a;
    cout<<"Value after decrement is : "<<a.display()<<endl;

    a++;
    cout<<"Value after increment is : "<<a.display()<<endl;

    a--;
    cout<<"Value after decrement is : "<<a.display()<<endl;

    b+=c;
    cout<<"Value after using +=operator is : "<<b.display()<<endl;


    return 0;
}