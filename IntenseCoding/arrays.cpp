#include<iostream>
using namespace std;

int main(){
    cout<<"Welcome to our company"<<endl;
    int array[4];
    cout << (int)array << endl;
    cout << (int)&array[0];
    for(int i=0;i<4;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<4;i++)
    {
        cout<<array[i]<<"\t";
    }
    return 0;
}