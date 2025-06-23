#include <iostream>
#include <iomanip>
using namespace std;


/*program to illustrate static functions can be called by class name itself.*/
class Myclass
{
    public:
        int multiply(int a , int b)
        {
            cout<<"i am pure integer function\n";
            return a * b;
        }

        static int multiply(float x, int y)
        {
            cout<<"\ni am pure float function";
            return x * y;
        }

};


float func(int array[], int length)
{
    float avg, sum = 0;
    array[0] = 10;
    for (int i = 1; i <= length; i++)
    {
        sum += array[i - 1];
    }
    avg = sum / length;
    return avg;
}

float func1(int *ptr, int length)
{
    *(ptr + 3) = 10;
    float avg = 9;
    return avg;
}

int main();

int func3(int a)
{
    a = 30;
    main();
    return a;
}

int func4(int *ptr)
{
    *(ptr) = 100;
    return 0;
}

void print(char name[], int age, float marks)
{
    cout << name << "  " << age << "  " << marks << endl;
}
int main()
{
    int arr[] = {1, 3, 4, 5};
    // cout<<"The array is "<<arr[0]<<endl;
    // float avg = func(arr, sizeof(arr) / sizeof(arr[0]));
    // cout<<"The array is "<<arr[0]<<endl;
    // cout << "the avg is :" << avg;
    // float avg = func1(arr, sizeof(arr) / sizeof(arr[0]));
    // cout << "The last element of the array is " << arr[3] << endl;

    /*IF WE PASS ARGUMENTS TO A FUNCTION WITHOUT USING POINTERS THERE WILL NOT BE
    ANY CHANGE IN THE ORIGINAL VARIABLE*/

    // int x = 90;
    // int a = func3(x);
    // cout << "the value of x outside the function is " << x << endl;
    // cout << "the value of x inside the function is " << x;

    /*IF WE WANT TO CHANGE THE VALUE OF THE ORIGINAL VARIABLE, WE NEED POINTERS*/

    // int b=func4(&x);
    // cout<<"the value of x outside the function is "<<x<<endl;
    // cout<<"the value of x inside the function is "<<x;
    // int y = func3(0);

    /*USING STATIC KEYWORD ALONG WITH NAME OF A FUNCTION WHICH IS 
    INSIDE CLASS "Myclass" */
    
    /*If we are not using static then we can call it only by 
    // making an object.*/
    // Myclass c;  
    // int result=c.multiply(5,7);
    // cout<<result;

    // /*If we use static with function name then we don't need 
    // to make a object. */
    // result=c.multiply( (float)6 , 8 );
    // cout<<endl<<result;

    return 0;
}
