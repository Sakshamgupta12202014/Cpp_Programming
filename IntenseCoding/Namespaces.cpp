#include<iostream>
namespace first{
    int x=1;
}
namespace  second{
    int x=2;
}
int func1(void);
int main(){
    int x=0;
    int main=12;
    std::cout << main<<"\n";
    std::cout << x<<"\n"; /*this will print the local value of x=0*/
    std::cout << first::x<<"\n";  /*this will print the value of x in namespace first*/
    std::cout << second::x<<"\n"; /* this will print the value of x in namespace second*/
    func1();
    return 0;
}

int func1(void){
    using namespace first;
    using namespace std;
    cout << x;
}