#include <iostream>
using namespace std;

typedef struct Employee
{
    int e_id;
    char favchar;
    int age;
} ep;

// struct Employee
// {
//     int e_id;
//     char favchar;
//     int age;
// } saksham;

typedef union company
{
    int c_id;
    int c_worth;
    int c_time;
} u;
int main()
{
    // ep saksham;
    // saksham.e_id=12;
    // saksham.age=19;
    // saksham.favchar='c';
    // cout << saksham.e_id << endl;
    // cout << saksham.favchar << endl;
    // cout << saksham.age << endl;

    // u c;
    // c.c_id=10;
    // cout<<c.c_id;

    const int size = 2;
    company c_array[size]; // array of unions.
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the details: ";
        cin >> c_array[i].c_id;
        cin >> c_array[i].c_worth;
        cin >> c_array[i].c_time;
    }
    cout << "Values stored in array of unions is :\n";
    for (int j = 0; j < size; j++)
    {
        cout << c_array[j].c_id << endl;
        cout << c_array[j].c_worth << endl;
        cout << c_array[j].c_time << endl;
    }

    return 0;
}