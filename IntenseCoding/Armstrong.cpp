#include <iostream>
#include<string>
#include <cmath>
#include <iomanip>
#include <classes.cpp>
using namespace std;

int main()
{
    int n, count = 0, dig;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    int num = n;

    /*calculating number of digits in a number */
    while (num > 0)
    {
        count += 1;
        num = num / 10;
    }
    cout << "The length of the number is: " << count << endl;
    num = n;
    while (num > 0)
    {
        dig = num % 10;
        cout<<dig<<endl;
        sum += pow(dig, count);
        cout<<sum<<endl;
        num = num / 10;
    }
    if (sum == n)
    {
        cout << "the number is armstrong number";
    }

    else
    {
        cout << "The number is not armstrong number";
    }

    return 0;
}