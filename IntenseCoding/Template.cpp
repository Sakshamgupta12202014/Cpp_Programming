/*
TEMPLATES IN CPP , REDUCES THE LENGTH OF CODE. */
#include<iostream>
using namespace std;
// template <class T>

// T square(T num)
// {
//     return (num * num);
// }

// int main(){
//     int num1 = 5;
//     cout << "Square of " << num1 << " is = " << square<int> (num1) << endl;
//     float num3 = 4.5;
//     cout << "Square of " << num3 << " is = " << square<float> (num3) << endl;
//     double num4 = 4.567;
//     cout << "Square of " << num4 << " is = " << square<double> (num4) << endl;
//     return 0;
// }

/*PROGRAM TO FIND MINIMUM OF TWO NUMBERS */

// T min1(float a,float b)
// {
//     return (a < b) ? a : b;
// }

// int main()
// {
//     int x,y;
//     float p,q;
//     // cout << "Enter integer value " << endl;
//     // cin >> x >> y;
//     cout << "Enter float value " << endl;
//     cin >> p >> q;
//     // cout << "min of integers " << min1<int>(x,y) << endl;
//     cout << "min of floating numbers " << min1<float>(p,q) << endl;
     
// }

// void swap1(T &a, T &b)
// {
//     T temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     int x,y;
//     cin >> x >> y;
//     cout << "Values of x and y respectively before swapping is " << x << "  " << y << endl;
//     swap1<int>(x,y);
//     cout << "Values of x and y respectively after swapping is " << x << "  " << y << endl;
//     return 0;
// }

// template<class T1, class T2>

// class Test
// {
//     T1 a;
//     T2 b;
// public:
//     Test(T1 x, T2 y)
//     {
//         a = x;
//         b = y;
//     }
//     void show()
//     {
//         cout << a << " and " << b << endl;
//     }
// };


//-------------------------------------------------Class Templates.---------------------------------------------------------

/* ------------------------------------C++ Program to implement template Array class--------------------------------------- */

// template <typename T> 

// class Array {
// private:
// 	T* ptr;
// 	int size;

// public:
// 	Array(T arr[], int s);
// 	void print();
// };

// template <typename T> Array<T>::Array(T arr[], int s)
// {
// 	ptr = new T[s];
// 	size = s;
// 	for (int i = 0; i < size; i++)
// 		ptr[i] = arr[i];
// }

// template <typename T> void Array<T>::print()
// {
// 	for (int i = 0; i < size; i++)
// 		cout << " " << *(ptr + i);
// 	cout << endl;
// }

// int main()
// {
// 	int arr[5] = { 1, 2, 3, 4, 5 };
// 	Array<int> a(arr, 5);
// 	a.print();
// 	return 0;
// }

/*---------------------------------------------Can there be more than one argument for templates? ------------------------------------------------*/
// template<typename t, typename u>

// class A
// {
// public:
//     t x;
//     u y;
//     A(t a, u b)
//     {
//         cout << "Constructor called " << endl;
//         x = a;
//         y = b;
//     }
//     void print()
//     {
//         cout << x << "  " << y << endl;
//     }
// };

// int main()
// {
//     A<int,char> a1(10,'s');
//     A<double,char> a2(40.345,'x');

//     a1.print();
//     a2.print();
// }


/*----------------------------------------------Can we specify a default value for template arguments?---------------------------------------------*/

template<class t,class u=char>

class A
{
public:
    t x;
    u y;
    A()
    {
        cout << "Constructor called " << endl;
    }
    void print()
    {
        cout << x << "  " << y << endl;
    }
};

int main()
{
    A<int> a1;

    a1.print();

}
