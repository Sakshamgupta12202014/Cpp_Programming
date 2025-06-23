#include<iostream>
using namespace std;

class Number
{
private:
    int num;
public:
    Number(int x){ num = x; }
    bool operator==(Number n)
    {
        if(num==n.num)
            return true;
        else
            return false;
    }
    int operator!()
    {
        return !num;
    }
};

int main(){
    Number n1(10), n2(10);
    int res=n1 == n2 ;
    cout<<res<<endl;

    
    res=!n1;
    cout<<res;
    return 0;
}