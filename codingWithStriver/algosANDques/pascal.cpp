#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//find element at rth row and cth col in pascals triangle

//formula (r-1)C(c-1)

void NcR(int row, int col){
    long long res = 1;
    
    for(int i=1; i<col; i++) {

        res = res * ((float)row / i);
        row--;
    }
    cout  << res << " ";
}

int main() {

    int row = 3;
    int col = 3;

    // //find nCr 
    // long long prod = 1;
    // for(int i=1; i<=col; i++) {

    //     prod = prod * ((float)row / i);
    //     row--;
    // }
    // cout << prod << endl;
   


    //Print nth row of pascal triangle
    int n=13;

    for(int col=1; col<=n; col++) {
        NcR(n-1, col);
        
    }

    cout << endl;
    //print pascal triangle
    // int N = 6;
    
    // for(int row=1; row<=N; row++) {

    //     for(int col=1; col<=row; col++) {

    //         NcR(row-1 , col);
    //     }
    //     cout << endl;
    // }
}