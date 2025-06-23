#include <bits/stdc++.h>
using namespace std;


int main() {

    string arr[4] = {"saksham", "mayur", "arpit", "anshul"};

    int n = 4;

    // for(int i=n-1; i>=0; i--) {

    //     for(int j=0; j<i; j++) {

    //         if (arr[j] > arr[j + 1]) {
    //             // Swap the strings
    //             string temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //         }
    //     }
    // }

    // for(int i=0; i<n; i++) {
    //     cout << arr[i] << "  ";
    // }
    cout << endl;

    //selection sort

    for(int i=0; i<=n-1; i++) {
        int min = i;

        for(int j=i; j<=n-1; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
            
        }
        string temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

    }
    for(int i=0; i<n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;

    //

    return 0;
}