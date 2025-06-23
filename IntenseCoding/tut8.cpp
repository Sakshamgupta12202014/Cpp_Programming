#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int i,n;
    cout<<"enter the value of n: ";
    cin>>n;
    // cout<<"The value of n is: "<<setw(5)<<n<<endl;
    for(i=1;i<=n;i++){
        cout<<setw(n-i)<<i<<"\n";
    }
    return 0;
}