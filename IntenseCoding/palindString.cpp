#include <iostream>
#include <string>
using namespace std;

// int main()
// {
//     char string[30];
//     int midpoint, flag = 0;
//     cout << "Enter string:";
//     cin >> string;
//     int strlength = 0 , i=0;
//     while(string[i]!='\0')
//     {
//         strlength += 1;
//         i++;
//     }
//     if ((strlength % 2) != 0)
//     {
//         midpoint = (strlength - 1) / 2;
//         for (int i = 0; i < midpoint; i++)
//         {
//             if (string[i] != string[strlength - 1 - i])
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag != 0)
//         {
//             cout << "The string is not palindrome";
//         }
//         else
//         {
//             cout << "The string is palindrome";
//         }
//     }
//     else
//     {
//         cout << "The string is not oddlength";
//     }

//     return 0;
// }

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int midpoint;
    int strlength = str.length();

    if (strlength % 2 != 0)
    {
        midpoint = (strlength - 1) / 2;
        bool ispalindrome = true;
        for (int i = 0; i < midpoint; i++)
        {
            if (str[i] != str[strlength - 1 - i])
            {
                ispalindrome = false;
                break;
            }
        }
        if (ispalindrome)
        {
            cout << "The string is palindrome";
        }
        else
        {
            cout << "The string is not palindrome";
        }
    }
    else
    {
        cout << "The string is not oddlength";
    }
}