#include <bits/stdc++.h>

using namespace std;

int main() {

    int num2=23;
    int num2Setbits=0;
    for(int i=0; i<32; i++){
        int val=1<<i;
        if((num2&val) > 0) num2Setbits+=1;
    }
    cout << num2Setbits << endl;
    return 0;
}