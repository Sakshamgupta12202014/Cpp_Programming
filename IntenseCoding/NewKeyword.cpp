#include <iostream>
using namespace std;

int func1(int *ptr)
{
    for(int j=0 ; j<5 ; j++)
    {
        cout<<"The "<<j<<" is "<<j[ptr]<<endl;
    }
    return 0;
}

int main()
{
    int *array = new int[5], sum = 0;
    for (int i = 0; i < 5; i++)
    {
        // cin >> array[i];
        cin>>i[array];      //another way of taking input.
        cout<<(int)(array+i);
        sum += array[i];
    }
    cout <<endl<< sum << endl;
    func1(array);
    return 0;
}