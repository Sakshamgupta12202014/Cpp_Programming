#include <bits/stdc++.h>

using namespace std;

int main() {

    int arr[6] = {5,2,4,7,7,1};
    int largest = arr[0];
    int slargest = -1;

    for(int i=0; i<6; i++) {
        if(arr[i] > largest) {g
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }    

    cout << "Second largest is : " << slargest << endl;

    int smallest = arr[0];
    int sSmallest = INT_MIN;

    for(int i=0; i<6; i++) {
        if(arr[i] < smallest) {
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < sSmallest) {
            sSmallest = arr[i];
        }
    }
    cout << "Second smallest is : " << sSmallest << endl;
    return 0;
}