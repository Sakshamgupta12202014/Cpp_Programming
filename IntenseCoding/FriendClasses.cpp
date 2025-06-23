#include<iostream>
using namespace std;

class Complex
{
    private:
        int a;
        int b;
        friend int Calculator::sum_real_complex(Complex,Complex);
    public:
        void setnumber();
        void getnumber(Complex);
};

void Complex ::setnumber(){
    cout<<"Enter real and imaginary coefficients-";
    cin>>a;
    cin>>b;
}

void Complex::getnumber(Complex o1){
    cout<<"The number is "<<a<<" + "<<b<<"i";
}

class Calculator
{
    public:
        int sum_real_complex(Complex a , Complex b){
            return (a.a+b.b);
        }
};
int main(){

    return 0;
}