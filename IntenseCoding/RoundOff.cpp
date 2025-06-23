/*Make sure you include <cmath> header file to use round function
1) round function returns the same data type as the input.
2)lround function returns long int .size=4
3)llround function returns long long int size=8*/

#include<iostream>
// #include<cmath>
#include<ctgmath>


using namespace std;

int main(){
    float x=0.346,y=0.075,z=1.34;
    cout<<"using round : "<<sizeof(round(x))<<" "<<round(y)<<" "<<round(z)<<endl;
    cout<<"using lround: "<<sizeof(lround(x))<<" "<<lround(y)<<" "<<lround(z)<<endl;
    cout<<"Using llround: "<<sizeof(llround(x))<<" "<<llround(y)<<" "<<llround(z)<<endl;


    /**** Positive Floating Number of decimal value 0.5 ****/
    x = 0.50, y = 25.5, z = 91.500;
    cout << "round(" << x << ") = " << round(x);
    cout << "\t\t" << "round(" << y << ") = " << round(y);
    cout << "\t\t" << "round(" << z << ") = " << round(z) << endl;

     /**** Negative Floating Number of decimal value less than 0.5 ****/
    x = -0.14, y = -0.002, z = -23.39;
    cout << "round(" << x << ") = " << round(x);
    cout << "\t" << "round(" << y << ") = " << round(y);
    cout << "\t\t" << "round(" << z << ") = " << round(z) << endl;

    /**** Negative Floating Number of decimal value greater than 0.5 ****/
    x = -0.72, y = -21.864, z = -57.62;
    cout << "round(" << x << ") = " << round(x);
    cout << "\t" << "round(" << y << ") = " << round(y);
    cout << "\t" << "round(" << z << ") = " << round(z) << endl;

    /**** Negative Floating Number of decimal value of 0.5 ****/
    x = -0.5, y = -6.50, z = -56.500;
    cout << "round(" << x << ") = " << round(x);
    cout << "\t" << "round(" << y << ") = " << round(y);
    cout << "\t\t" << "round(" << z << ") = " << round(z) << endl;

    return 0;
}