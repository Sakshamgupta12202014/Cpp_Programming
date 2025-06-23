#include <bits/stdc++.h>
#include <queue>

using namespace std;


// implement MinHeap yourself
// we are implementing heap using arrays which is static way of implementing heaps


class MinHeap{
public:
    int* heap;
    int size;
    int maxSize;

    MinHeap(int capacity){
        this->heap = new int[capacity];
        this->size = 0;
        this->maxSize = capacity;
    }

    ~MinHeap(){
        cout << "destructor of MinHeap class called";
        delete[] heap;
    }

    int left(int index) {
        return (2*index) + 1;
    }

    int right(int index) {
        return (2*index) + 2;
    }

    int parent(int index) {
        return (index-1) / 2;
    }

    int peek(){
        return heap[0];
    }

    bool isLeaf(int index){
        if(index >= size/2) return true;
        return false;
    }

    int findMinIndex(int fPos, int sPos){
        if(heap[fPos] < heap[sPos]) return fPos;
        return sPos;
    }

    void swap(int fPos, int sPos){
        int temp = heap[fPos];
        heap[fPos] = heap[sPos];
        heap[sPos] = temp;
    }

    void insert(int key){
        int pos = size;
        
        heap[pos] = key;
        
        // bottom - up heapify  (inserted element bubble up hote hote upar ki side apni correct position pe aa jayega )
        while(heap[pos] < heap[parent(pos)]){
            swap(pos, parent(pos));
            pos = parent(pos);
        }

        size+=1;
    }

    void minHeapify(int index){
        
        // if(isLeaf(index)) return;
        // Top to Bottom Heapify--------------------------------

        while( ( heap[index] > heap[left(index)] || heap[index] > heap[right(index)] ) && isLeaf(index) != true) {
            // choose min from left and right
            int minIndex = findMinIndex(left(index), right(index));
            swap(index, minIndex);
            index = minIndex;
        }
    }

    int poll() {
        // delete val of highest priority 
        int deleted = heap[0];
        size--;
        heap[0] = heap[size];

        minHeapify(0);
        return deleted;
    }
};


class MaxHeap {

public:
    int *heap;
    int size;
    int maxSize;

    MaxHeap(int capacity){
        this->maxSize = capacity;
        this->heap = new int[capacity];
        this->size = 0;
    }

    
    ~MaxHeap() {
        delete[] heap; // Free memory
    }

    int left(int index){
        return (2*index) + 1;
    }
    int right(int index){
        return (2*index) + 2;
    }
    int parent(int index){
        return (index-1) / 2;
    }

    void swap(int fPos , int sPos){
        int temp = heap[fPos];
        heap[fPos] = heap[sPos];
        heap[sPos] = temp;
    }

    int peek(){
        // peek gives the element with the highest priority present in the array which in the case of MaxHeap is 0th index
        return heap[0];
    }

    void insert(int key){
        int pos = size;
        heap[pos] = key;

        // most important for interviews
        // bottom-up heapify   ( neeche se insert hokar , upar bubble up hokr aya hai)
        while(heap[pos] > heap[parent(pos)]){
            swap(pos, parent(pos));   // change val of parent with its child (swap)  and do this till you have your child value greater than parent 
            pos = parent(pos);   // change the pos to new index which is now parent index
        }
        size += 1;
    }

    bool isLeaf(int index) {
        if(index >= size / 2){
            return true;
        }
        else return false;
    }

    // most important for interviews
    // Top - Down heapify  ( 0th se start hua hai , aur neeche apni shi jagah pahunch raha hai)
    void maxHeapify(int index){

        if(isLeaf(index)) return;  // go till you reach leaf node

        // compare index with its children
        int pos = index;
        if(heap[pos] < heap[left(pos)] || heap[pos] < heap[right(pos)]){
            if(heap[left(pos)] < heap[right(pos)]) {  
                swap(pos, right(pos));      // swap with that child which has greater value kyunki max heap mei greater value is at the parent index
                maxHeapify(right(pos));     // again check if maxHeap property is still violated
            }
            else{
                swap(pos, left(pos));
                maxHeapify(left(pos));   // again check if maxHeap property is still violated
            }
        }
    }

    int poll(){
        // delete the element with maximum priority which is 0th index of the heap array
        int deleted = heap[0];
        heap[0] = heap[--size];   // swap it with the last index of the heap array
        maxHeapify(0);
        return deleted;
    }

};

int main() {
    // Your code goes here 
    MaxHeap* maxHeap = new MaxHeap(500);
    maxHeap->insert(20);
    maxHeap->insert(30);
    maxHeap->insert(40);
    maxHeap->insert(90);
    maxHeap->insert(60);
    maxHeap->insert(50);

    cout  << "Element with max priority : " << maxHeap->peek() << endl;

    // maxHeap->poll();
    // cout  << "Element with max priority : " << maxHeap->peek() << endl;

    MinHeap* minHeap = new MinHeap(100);
    minHeap->insert(30);
    minHeap->insert(60);
    minHeap->insert(50);
    minHeap->insert(20);
    minHeap->insert(100);
    minHeap->insert(200);

    // cout << "Max priority in heap : "  << minHeap->peek() << endl;

    // minHeap->poll();

    // cout << "Max priority in heap : "  << minHeap->peek() << endl;

    // minHeap->insert(10);

    // cout << "Max priority in heap : "  << minHeap->peek() << endl;



    return 0;
}