/*Constructor Overloading.
When you make a constructor , then you add a default constructor too .
*/

#include<iostream>
#include<string>
using namespace std;

// const double pi=3.14159;
// class AreaOfCircle
// {
//     float r;
//     public:
//         AreaOfCircle(float radius){
//             cout<<"float radius\n";
//             cout<<"The area of the circle is: "<<pi*radius*radius<<endl;
//         }
//         // AreaOfCircle(){
//         //     r=0;
//         //     cout<<"Area of the circle is: "<<pi*r*r<<endl;
//         // }
//         AreaOfCircle(int radius){
//             cout<<"Integer radius"<<endl;
//             cout<<"The area of the circle is: "<<pi*radius*radius<<endl;
//         }
// };

// int main(){
//     AreaOfCircle a;
//     AreaOfCircle c(3.14f);
//     AreaOfCircle b(3);
//     return 0;
// }

class Number{
    int x;
public:
    Number(){}       //need of a default constructor.
    Number(int num)
    {
        x=num;
    }
    void display(){}

};
int main(void)
{
    Number a,b,c;
    a.display();
}