#include<iostream>
using namespace std;

int main() {

    //printing squares
    // int rows = 5;
    
    // for(int i = 0; i<rows ; i++) {
    //     for(int j = 0; j<rows ; j++) {
    //         cout << "*" << "  " ;
    //     }
    //     cout << endl;
    // }

    //Printing right angled triangle 
    // int rowsInTriangle ;
    // cin >> rowsInTriangle;
    
    // for(int i = 0; i<rowsInTriangle ; i++) {
    //     for(int j = 0; j<=i; j++) {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }


    //printing reverse right angled triangle
    // for(int i = 0; i<rowsInTriangle; i++) {

    //     for(int j=rowsInTriangle-1; j>=0; j--) {
  
    //         if( i<j) {
    //             cout << "  ";
    //         }
    //         else{
    //             cout << " *";
    //         }
    //     }

    //     cout << endl;

    // }

    // int n = 5;
    // for(int i=0; i<n; i++) {

    //     for(int j=n-i-1; j>0; j--){
    //         cout << "  ";
    //     }

    //     for(int k=i+1; k>0; k--){
    //         cout << " *";
    //     }
    //     cout << endl;

    // }


    //printing pyramid

    // int n = 5;
    // for(int i=0; i<n; i++) {

    //     for(int j=0; j<=n-1-i; j++) {
    //         cout << "  ";
    //     }

    //     for(int k=1; k<=2*i+1; k++) {
    //         cout << " *";
    //     }

    //     for(int m=n+i; m<=2*n-2; m++) {
    //         cout << " ";
    //     }
    //     cout << endl;

    // }

    cout << endl;
    //Reverse pyramid

    // for(int i=n-1; i>=0; i--) {

    //     for(int j=0; j<=n-1-i; j++) {
    //         cout << "  ";
    //     }

    //     for(int k=1; k<=2*i+1; k++) {
    //         cout << " *";
    //     }

    //     for(int m=n+i; m<=2*n-2; m++) {
    //         cout << " ";
    //     }
    //     cout << endl;

    // }

    //inverted right angled triangle

    // int row = 6;
    // for(int i=row-1 ; i>=0; i--) {

    //     for(int j=0 ; j<=i; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //Inverted reverse right angled triangle

    // int n=5;

    // for(int i=n-1; i>=0 ; i--) {
        
    //     for(int j=n-1; j>i; j--) {
    //         cout << "  ";
    //     }

    //     for(int k=i; k>=0; k--) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    //Hollow rectangle
    // int b = 4;
    // int l = 6;
    
    // for(int i=0; i<=b-1; i++) {

    //     if(i==0 || i==b-1) {

    //         for(int j=0; j<l; j++) {
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    //     else{
    //         cout << "* ";

    //         for(int k=1; k<l-1; k++) {
    //             cout << "  ";
    //         }

    //         cout << "* ";
    //         cout << endl;
    //     }
    // }

    //Numeric half pyramid

    int r2 = 10;

    // for(int i=0; i<r2; i++) {

    //     for(int j=1; j<=i+1; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    //Inverted numeric half pyramid

    // for(int rows=0; rows<r2; rows=rows+1) {

    //     for(int col=0; col<r2-rows; col=col+1) {
    //         cout << col+1 << " ";
    //     }
    //     cout << endl;
    // }

    //

    // for(int rows=0; rows<r2; rows=rows+1) {

    //     //print spaces
    //     for(int space=0; space<r2-rows-1; space=space+1) {
    //         cout << "  " ;
    //     }

    //     //print stars
    //     for(int stars=0; stars<2*rows+1 ; stars=stars+1) {
    //         cout << " *" ;
    //     }

    //     cout << endl;
    // }

    // full pyramid
    r2 = r2 / 2;       //we have to run loop for half of the total lines

    // for(int i=0; i<r2; i++) {

    //     //print spaces first
    //     for(int j=0; j<r2-i-1; j++) {
    //         cout << " ";
    //     }

    //     //print stars
    //     for(int k=0; k<i+1; k++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for(int i=0; i<r2; i++) {

    //     //print spaces
    //     for(int j=0; j<i ;j++) {
    //         cout << " ";
    //     }

    //     //print stars
    //     for(int k=0; k<r2-i; k++) {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    //Hollow pyramid

    // int hp = 25;
    // for(int row=0; row<hp; row++) {

        
    //     //print spaces
    //     for(int col=0; col<hp-row-1; col++) {
    //         cout << " ";
    //     }
    //     cout << "*";

    //     //print only 1 star in row 0 rest 2 stars
    //     if(row!=0) {

    //         //print spaces
    //         for(int spaces=0; spaces<2*row-1; spaces++) {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // cout << endl;

    // //inverted hollow pyramid

    // for(int row=hp-1; row>=0; row--) {

    //     //print initial spaces
    //     for(int spaces=0; spaces<hp-row-1; spaces++) {
    //         cout << " ";
    //     }
    //     cout << "*";

    //     //for row!=(n-1)th
    //     if(row!=0) {

    //         //print spaces
    //         for(int spaces=0; spaces< 2*(row)-1; spaces++) { //error
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }



    //hollow diamond
    //combine code of hollow and inverted hollow pyramid


    //Flipped solid Diamond

    // int ROWS = 4;

    // for(int row=0; row<ROWS; row++) {

    //     //print initial stars
    //     for(int stars=0; stars<ROWS-row; stars++) {
    //         cout << "* ";
    //     }

    //     //print spaces
    //     for(int spaces=0; spaces<2*row+1; spaces++) {
    //         cout << "  ";
    //     }

    //     //print rest stars
    //     for(int stars=0; stars<ROWS-row; stars++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //inverting the pattern

    // for(int row=0; row<ROWS; row++) {

    //     //printing initial stars
    //     for(int star=0; star<row+1; star++) {
    //         cout << "* ";
    //     }
    //     //print spaces
    //     for(int spaces=0; spaces<2*ROWS-2*row-1; spaces++) {
    //         cout << "  ";
    //     }

    //     //print ending stars
    //     for(int star=0; star<row+1; star++) {
    //         cout << "* ";
    //     }
    //     cout << endl;

    // }


    //------------------------

    // int tRows = 5;
    // for(int row=0; row<tRows; row++) {

    //     //inner loop runs for 2*row+1 time
    //     for(int col=0; col<2*row+1; col++) {
    //         if(col%2==0) 
    //             cout << row +1 << " ";
    //         else if(col%2!=0)
    //             cout << "* ";

    //     }
    //     cout << endl;
    // }

    cout << endl;

    //doosra tarika
    // for(int row=0; row<tRows; row++) {

    //     //inner loop runs for 2*row+1 time
    //     for(int col=0; col<row+1; col++) {
    //         if(col == row ){
    //             cout << row +1 ;
    //         }
    //         else{
    //             cout << row +1 << " * ";
    //         }

    //     }
    //     cout << endl;
    // }

    //Hollow inverted half pyramid

    // int hit=10;
    // for(int row=0; row<hit; row++) {

    //     for(int col=0; col<hit-row; col++) {
            
    //         if(row==0) {
    //             cout << "* ";
    //         }
    //         else{
    //             if(col==0 || col==hit-row-1){
    //                 cout << "* ";
    //             }
    //             else{
    //                 cout << "  ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    cout << endl;
    //Hollow upright half pyramid

    // for(int row=0; row<hit; row++) {

    //     for(int col=0; col<row+1; col++) {
            
    //         if(row==hit-1) {
    //             cout << "* ";
    //         }
    //         else{
    //             if(col==0 || col==row){
    //                 cout << "* ";
    //             }
    //             else{
    //                 cout << "  ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }


    //alphabet pyramid

    // char ch='A';
    // int at = 7;
    // for(int row=0; row<at; row++) {

    //     ch='A';
    //     //range
    //     for(int col=0; col<2*row+1; col++) {

    //         //till this print increasing alphabet
    //         if(col <= row) {
    //             cout << ch << " ";
    //             if(col!=row)
    //                 ch++;
    //         }
    //         else if(col > row) {
    //             ch=ch-1;
    //             cout << ch << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    //numeric hollow inverted half pyramid

    int rp = 5;
    
    // for(int row=0; row<rp; row++) {

    //     for(int col=0; col<(rp-row); col++) {

    //         if(row!=0) {
                
    //             if(col == 0 || col == rp-row-1) {
    //                 cout << row+col+1 << " ";
    //             }
    //             else{
    //                 cout << "  ";
    //             }
    //         }
    //         else{
    //             cout << row+col+1 << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    //Numeric palindrome equilateral pyramid
    int num;
    for(int row=0; row<rp; row++) {

        num = 1;
        //print leading spaces    
        for(int sp=0; sp<rp-row-1; sp++) {
            cout << " " ;
        }

        //print numbers
        for(int col=0; col<row+1; col++) {
            cout << num++ << "";
        }

        num=num-2;
        for(int col=0; col<row ; col++) {
            cout << num-- << "";
        }
        cout << endl;
    }

    
}