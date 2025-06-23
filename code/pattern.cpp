#include <bits/stdc++.h>
using namespace std;

//print pattern of diamond

void pattern(int idx, int n){

    //spaces
        
}
int main() {

    int n=4;

    for(int i=0; i<n; i++){

        //spaces
        for(int sp=0; sp<(n-i-1); sp++){
            cout<<"  ";
        }
        
        //stars
        for(int st=0; st<(2*i+1); st++){
            cout<<"* ";
        }
        cout << endl;
    }

    //inverted ke liye

    for(int i=0; i<(n-1); i++){
        //spaces
        for(int sp=0; sp<(i+1); sp++){
            cout<<"  ";
        }
        
        //stars
        for(int st=0; st<(n-2*i+1); st++){
            cout<<"* ";
        }
        cout << endl;
    }
    return 0;
}