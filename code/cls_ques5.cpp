#include <bits/stdc++.h>

using namespace std;

int findPower(int k, int n){

    if(n==0) return 1;    
    int prod = k*findPower(k, n-1);
    return prod;
}
void printStars(int lines){

    
}

int main() {

    // int k;
    // cout << "Enter k : ";
    // cin>>k;

    // int n;
    // cout << "enter n : ";
    // cin>>n;

    // int ans=findPower(k,n);
    // cout << "ans is : " << ans;

    int lines;
    cout<<"Enter the no of lines : ";
    cin>>lines;

    printStars(lines);
    return 0;
}