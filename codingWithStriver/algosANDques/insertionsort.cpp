#include <bits/stdc++.h>

using namespace std;

void insertionSort(int array[], int n) {

    for(int i=0; i<=n-1; i++) {

        int j=i;
        while( j>0 && array[j-1] > array[j]){

            //swap
            int temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;

            j--;
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

    int n;
    cin >> n ;
    int array[20];

    for(int i=0; i<=n-1; i++){
        cin >> array[i];
    }

    insertionSort(array, n);
    return 0;
}