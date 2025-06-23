#include<iostream>
#include<string>
#include<cmath>
using namespace std;

// using namespace std;

/*UNION doesn't work with string datatype*/
// union Employee
// {
//     int empid;
//     char name[20];
//     char dob[10];
//     char doj[10];
//     double salary;
//     int multiply(){
//         return salary*1.1;
//     }
// }e;
// // int main(){
// //     cin>>e.empid;
// //     cout<<e.empid<<endl;
// //     cin>>e.name;
// //     cout<<e.name<<endl;
// //     cout << "Enter the salary: ";
// //     cin>>e.salary;
// //     cout<<e.multiply();
// //     cout<<"The sizeof union Employee is: "<<sizeof(Employee);
// //     return 0;
// // }

// class rectangle{
//     int l;
//     int b;
//     public:
//         static int count;
//         static int getcount(void){
//             count+=1;
//             return count;
//         }
//         void setdimen();
//         void getarea();
// };

// int rectangle::count=0;
// void rectangle::setdimen(void){
//     cin>>l>>b;
// }

// void rectangle::getarea(void){
//     cout<<"Area of rectangle "<<rectangle::getcount()<<": "<<l*b<<endl;
// }

// int main(void){
//     int n;
//     cin>>n;
//     rectangle r[n];
//     for(int i=0;i<n;i++)
//     {
//         r[i].setdimen();
//     }
//     cout<<"The number of rectangles are: "<<n<<endl;
//     for(int i=0;i<n;i++)
//     {
//         r[i].getarea();
//     }
// }
// #include<iostream>
// #include<cmath>
// #include<iomanip>
// using namespace std;

// int main(){
//     int n,count=0,dig;
//     int sum=0;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int num=n;


// /*calculating number of digits in a number */
//     while(num>0){
//         count+=1;
//         num=num/10;
//     }
//     cout<<"The length of the number is: "<<count<<endl;
//     num = n;
//     while(num>0)
//     {
//         dig=num%10;
//         sum+=pow(dig,count);
//         num=num/10;
//     }
//     if(sum==n){
//         cout<<"the number is armstrong number";
//     }
    
//     else{
//         cout<<"The number is not armstrong number";
//     }

//     static int s=10;
//     cout<<s;
//     return 0;
// }

#include <iostream>
/*This function is  returning a address of a variable.*/
int* fun(){
    static int x = 5;
    return &x;
}

int main(){
    // int* p = fun();
    // cout << *p << endl;


    return 0;
}