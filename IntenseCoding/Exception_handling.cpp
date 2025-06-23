#include<iostream>
using namespace std;

// int main(){
//     int age;
//     cout << "Enter your age!!" << endl;
//     cin >> age;
//     try {
//         cout << "checking your age for voting!!" << endl;
//         if(age >= 18)
//         {
//             cout << "you are eligible for voting , jaa vote kar!!" << endl;
//         }
//         else
//         {
//             throw(age);
//         }
//     }
//     catch(int age)
//     {
//         cout << "Bro control.... you're " << age << " years old wait for " << 18-age << " years " << endl; 
//     }
//     return 0;
// }

// int main()
// {
//     int a[5] = {1,3,4,5,6};
//     try
//     {
//         int i = 0;
//         while(1)
//         {
//             cout << a[i++] << endl;
//             if(i==5)
//             {
//                 cout << "!!Error!!" << endl;
//                 throw i;
//             }
//         }
//     }
//     catch(int j)
//     {
//         cout << "sorry can't access out of bound addresses!!" << endl;
//     }
// }

// void divide(int x, int y, int z)
// {
//     cout << "we are inside the function" << endl;
//     if((x-y)!=0)
//     {
//         int R = z/(x-y);
//         cout << "Result = " << R << endl;
//     }
//     else
//     {
//         throw (x-y);
//     }
// }
// int main()
// {
//     try
//     {
//         cout << "we are inside the try block" << endl;
//         divide(10,30-10,30);
//         divide(10,30-10,20);
//     }
//     catch(int i)
//     {
//         cout << "caught the exception" << endl;
//     }
// }

// void test(int x)
// {
//     try
//     {
//         if(x==1) throw x;
//         else if(x==0) throw 'x';
//         else if(x==-1) throw 1.0;
//         cout << "ENd  of try block " << endl;
//     }
//     catch(char c)
//     {
//         cout<< "Caught a character" << endl;
//     }
//     catch(int m)
//     {
//         cout<< "Caught a character" << endl;
//     }
//     catch(double i)
//     {
//         cout<< "Caught a double" << endl;
//     }
//     cout<< "End of try catch system!!"<<endl;
// }
// int main()
// {
//     cout<<"Testing multiple catches"<<endl;
//     cout<<"x==1"<<endl;
//     test(1);
//     cout<<"x==0"<<endl;
//     test(0);
//     cout<<"x==-1"<<endl;
//     test(-1);
//     cout<<"x==2"<<endl;
//     test(2);
//     return 0;
// }

class Test
{
public:
    int i=0;
    Test(){ cout << "Constructor of Test " << ++i <<  endl; }
    ~Test(){ cout << "Destructor of Test " << i << endl; }
};

int main()
{
    Test t1;
    try
    {
        Test t2;
        throw 13;
    }
    catch(int h){
        cout << "Exception caught!!" << endl;
    }
}