/*what is function overloading ?
ans-> Function overloading is a feature of OOP in which two or more 
functions can have the same name but different no. of / different 
type of parameters. */

#include <iostream>
using namespace std;


void add(int a, int b)
{
cout<<"\nhello\n";
cout << "sum = " << (a + b);
}

void add(double a, double b)
{
	cout << endl << "sum = " << (a + b);
}

// Driver code
int main()
{
	add(10, 2);
	add(5, 6);

	return 0;
}
