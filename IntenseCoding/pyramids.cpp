#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<=i;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (j >= (n - i - 1) && j <= (n + i - 1))
            {
                cout << "*";
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}
