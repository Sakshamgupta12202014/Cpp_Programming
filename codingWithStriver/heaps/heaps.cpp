#include <bits/stdc++.h>
using namespace std;

class heap{
public:
    int arr[100];
    int size = 0;

    void insert(int val) {

        size++;
        int index = size;

        arr[index] = val; 

        int i=index;
        while( i>1 ) {
            int parent = i/2;
            i=parent;

            if(arr[index] > arr[parent]) {
                //swap
                int temp = arr[index];
                arr[index] = arr[parent];
                arr[parent] = temp;
            }
            else{
                return;
            }
        }

    }
    void print() {

        for(int i=1;i<=size; i++) {
            cout << arr[i] << "  ";
        }
        cout << endl;
    }


    void deleteFromHeap() {
        if(size == 0) {
            cout << "nothing to delete" << endl;
        }

        //delete root node
        //last node --> arr[size]
        //swap first and last node
        arr[1] = arr[size];

        size--;

        int i = 1;
        while(i<=size) {

            int left = 2*i;
            int right = 2*i + 1;
            
            if(left <size && arr[left] > arr[i]) {
                //swap
                int temp = arr[left];
                arr[left] = arr[i];
                arr[i] = temp;

                i=left;                
            }
            else if(right < size && arr[right] > arr[i]) {

                int temp = arr[right];
                arr[right] = arr[i];
                arr[i] = temp;
                i=right;
            }
            else{
                return;
            }
        }
    }


};

void heapify(int arr[], int n, int i) {

    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left <= size && arr[left] > arr[largest]){
        largest = left;
    }
    else if(right <= size && arr[right] > arr[largest]) {
        largest = right;
    }

    if(largest != i) {
        int temp = arr[largest];
        arr[largest] = arr[i];
        arr[i] = temp;

        heapify(arr, n, largest);
    }
    
}

void heapSort(int arr[], int n) {

    int size=n;

    while(size>1) {

        int temp = arr[1];
        arr[1] = arr[size];
        arr[size] = temp;

        size--;

        heapify(arr,n,1);
    }
}

int main() {

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();

    h.deleteFromHeap();
    h.print();


    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;

    for(int i=n/2; i>0; i--) {
        heapify(arr,n, i);
    }



    
    return 0;
}