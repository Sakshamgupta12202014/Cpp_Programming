#include<iostream>
using namespace std;
int main()
{
    int t=1,n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    do{
        cout<<n*t<<endl;
        t++;
    }while(t<=10);
}