#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int n;
    cin>>n;
    int copy=n;
    
    int dec = 0,dig;
    int i = 0;
    bool isbinary=true;
    
    while(copy!=0){
        dig=copy%10;
        if(dig!=1 && dig!=0){
            isbinary=false;
            break;
        }
        copy=copy/10;
    }
        if(isbinary){
            if(n>=0 && n<=11111111){
                while(n > 0){
                    int num = n%10;
                    dec += num * pow(2,i);
                    n=n/10;
                    i++;
                }
            }
        }
        else{
            exit(0);
        }

    cout<<dec;
}
