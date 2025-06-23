#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int x, copy, rem;
    cin >> x;
    copy = x;
    int binary[8] = {};
    int dup_binary[8];

    int len = 7;
    while (x > 0)
    {
        rem = x % 2;
        binary[len] = rem;
        len -= 1;
        cout << x % 2 << "  ";
        x = x / 2;
    }
    cout << endl;

/*displaying the 8 bit binary number*/
    for (int i = 0; i < 8; i++)
    {
        cout << binary[i] << "  ";
        dup_binary[i]=binary[i];
    }


    cout << "\ndisplaying complement of the given number: ";
    cout << -(copy + 1);

/*This is left shift*/
    cout << "\nperforming left shift: \n";
    for (int i = 0; i < 7; i++)
    {
        binary[i]=binary[i+1];
    }
    binary[7]=0;

    int eq_decimal=0,array_index=0;
    for(int i=0;i<8;i++)
    {
        cout<<binary[i]<<"  ";
    }

    for(int i=7;i>=0;i--)
    {
        if(binary[i]==1){
            eq_decimal+=pow(2,array_index);
        }
        array_index+=1;
    }
    cout<<"\nafter left shift: "<<eq_decimal;

/*This is right shift************************************************************/
    cout << "\nperforming right shift: \n";
    for (int i = 6; i >= 0; i--)
    {
        dup_binary[i+1]=dup_binary[i];
    }
    dup_binary[0]=0;

    int equi_decimal=0,array_index2=0;
    for(int i=0;i<8;i++)
    {
        cout<<dup_binary[i]<<"  ";
    }

    for(int i=7;i>=0;i--)
    {
        if(dup_binary[i]==1){
            equi_decimal+=pow(2,array_index2);
        }
        array_index2+=1;
    }
    cout<<"\nafter right shift: "<<equi_decimal;
    return 0;
}