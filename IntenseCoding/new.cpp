// #include<stdio.h>
// #include<conio.h>
// typedef struct Employee
// {
//     int age;
//     char favchar;
//     int e_id;
// }ep;
// int main(){
//     ep saksham;
//     saksham.age=19;
//     saksham.e_id=98;
//     saksham.favchar='c';
//     printf("%d\t%c\t%d",saksham.age,saksham.favchar,saksham.e_id);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int *ptr;
// 	{
// 		int x = 45;
// 		ptr = &x;
// 		cout << "Address assigned to ptr inside block " << (int)ptr << endl;
// 		cout << "value at address inside block " << (int)ptr << " is " << *ptr << endl;
// 	}

//     ptr = NULL;
// 	cout << "Address assigned to ptr outside block " << (int)ptr << endl;
// 	cout << "Value outside block is " << *ptr << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Array
// {
//     int *arr;
//     int size;

// public:
//     Array(int n)
//     {
//         size = n;
//         arr = new int[size];
//         cout << "Enter elements in the array: " << endl;
//         for (int i = 0; i < size; i++)
//         {
//             cin >> arr[i];
//         }
//     }
//     int get_sum()
//     {
//         int sum = 0;
//         for (int i = 0; i < size; i++)
//         {
//             sum += arr[i];
//         }
//         return sum;
//     }

//     void display_data()
//     {
//         for (int i = 0; i < size; i++)
//         {
//             cout << "\t" << arr[i];
//         }
//         cout << "\n Sum of elements=" << get_sum();
//     }
//     ~Array()
//     {
//         delete[] arr;
//         cout << "\nMemory deallocated";
//     }
// };

// int main()
// {
//     int n;
//     cout << "Enter the number of elements:" << endl;
//     cin >> n;
//     Array a(n);
//     a.display_data();
//     return 0;
// }

// #include <iostream>
// #include <string.h> //for strcpy(), etc
// using namespace std;

// class string1 // user-defined string type
// {
// private:
//     char *str; // pointer to string
// public:
//     string1(char *s) // constructor, one arg
//     {
//         int length = strlen(s);     // length of string argument
//         str = new char[length + 1]; // get memory
//         strcpy(str, s);             // copy argument to it
//     }
//     ~string1() // destructor
//     {
//         cout << "Deleting str\n";
//         delete[] str;               // release memory
//     }
//     void display()                  // display the String
//     {
//         cout << str << endl;
//     }
// };
// int main()
// { // uses 1-arg constructor
//     string1 s1("This is DMA example for string");
//     cout << "s1="; // display string
//     s1.display();
//     return 0;
// }


#include<iostream>
using namespace std;

class employee
{
    int size;
    int *arr;
public:
    employee()
    {
        cout<<"Enter size of array"<<endl;
        cin>>size;
        arr=new int[size];
        cout<<"Enter elements of array"<<endl;

        for(int i=0;i<size;i++)
        {
            cin>>*(arr+i);
        }
    }
    void display()
    {
        for(int i=0;i<size;i++)

        {
            cout<<*(arr+i)<<" ";
        }
        cout<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter no of employees"<<endl;
    cin>>n;
    employee *p=new employee[n];

    for(int i=0;i<n;i++)
    {
        (p+i)->display();
    }
    delete []p;

    return 0;
}