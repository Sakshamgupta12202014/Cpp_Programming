#include <bits/stdc++.h>

using namespace std;

int findFactorial(int n){
    if(n==1) return 1;
    if(n==0) return 1;

    int fact=n*findFactorial(n-1);
    return fact;
}
int main() {

    int n;
    cin>>n;

    while(n>0){

        int ans=findFactorial(n);
        cout << n << " : " << ans << endl;
        n--;
    }
    return 0;
}