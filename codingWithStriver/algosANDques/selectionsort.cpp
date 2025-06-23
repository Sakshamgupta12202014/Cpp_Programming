#include <bits/stdc++.h>

using namespace std;

//Select minimum and swap
int main() {

    int array[6] = {13 , 46, 24, 52, 20, 9};
    int n = 6;
    //sort using selection sort
    for(int i=0; i<=n-2; i++) {

        int mini = i;
        for(int j=i; j<=n-1; j++) {

            if(array[j] < array[min]) {
                //swap using third variable
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }

        //printing array after each iteration 
        cout << "Array after " << i+1 << " iteration" << endl;
        for(int k=0; k<=n-1; k++) {
            cout << array[k] << " ";
        }
        cout << endl;
    }


    
    return 0;
}