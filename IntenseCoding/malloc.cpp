#include<iostream>
// #include<conio.h>
#include<cstdlib>
using namespace std;
int main()
{
    int* ptr;
    ptr=(int*)malloc(5*sizeof(int));
    for(int i=0;i<5;i++)
    {
        // scanf("%d",(ptr+i));
        cin>>*(ptr+i);
    }
    for(int i=0;i<5;i++)
    {
        // printf("%d\t",*(ptr+i));
        cout<<i[ptr];
    }
}
// int main(){
//     int array[10]={1,3,4,5,6,7,8,9,30,11};
//     array[13];
//     for(int i=0 ; i < 11 ; i+=1)
//     {
//         cout<<i[array]<<"   ";
//     }
// }