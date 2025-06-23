#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n){
    if(n==1) return 1;
    if(n==0) return 0;

    int num=fibonacci(n-1) + fibonacci(n-2);
    return num;
}
int main() {

    int n;
    cout << "Enter number upto which you wish to print fibonacci series : ";
    cin >> n;

    while(n--){
        int ans=fibonacci(n);
        cout << ans << endl;
    }
    return 0;
}