#include<iostream>
using namespace std;

int main(){
    string name;
    cin>>name;
    for(int i=0;i<name.length();i++)
    {
        name[i]=name[i]-32;
    }
    cout<<name;
    return 0;
}