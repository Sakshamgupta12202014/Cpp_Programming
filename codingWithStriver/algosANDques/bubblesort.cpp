#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int array[], int n) {

    bool swapped = false;
    for(int i=0; i<=n-2; i++) {

        for(int j=0; j<=n-i-2; j++) {

            if(array[j] > array[j+1]) {
                swapped = true;
                //swap
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }

        //optimisation
        if(!swapped) {
            cout << "The array is already sorted" ;
            break;
        }

        //print array after each iteration
        cout << "Array after " << i+1 << " iteration" << endl;
        for(int p=0; p<=n-1; p++) {
            cout << array[p] << " " ;
        }
        cout << endl;
    }
}
int main() {

    //bubble sort
    int n;
    cin >> n ;
    int array[20];

    for(int i=0; i<=n-1; i++){
        cin >> array[i];
    }

    bubbleSort(array, n);

    
    return 0;
}