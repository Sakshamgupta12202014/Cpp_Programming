#include <iostream>
using namespace std;

void main2(int* aray , int rows , int columns){
    for(int i=0;i<rows;i+=1)
    {
        for(int j=0;j<columns;j+=1)
        {
            cout<< *(aray + i * columns + j) <<"   ";
        }
        cout<<endl;
    }
}
// void main3(int* aray[][])
// {
    
// }
int main()
{
    int array[][3] = {1, 3, 4, 5, 6, 7};
    int rows,cols;
    cin>>rows>>cols;
    int arr[rows][cols] = {{1, 3, 4},
                     {5, 6, 7},
                     {8, 9, 10}};
    // for (int i = 0; i < 3; i += 1)
    // {
    //     for (int j = 0; j < 3; j += 1)
    //     {
    //         cout << arr[i][j] << "   ";
    //     }
    //     cout<<endl;
    // }
    main2(reinterpret_cast<int*>(arr),3,3);
    return 0;
}