#include<bits/stdc++.h>
using namespace std;

template <typename T>
T area_rect(T a, T b) {
    T res = a*b;
    return res;
}

int main() {

    int intArea = area_rect<int>(5,10);
    cout << intArea << endl;

    double doubArea = area_rect<double>(5.5, 10.4);
    cout << doubArea << endl;

    
    //Vectors
    vector<int> nums = {23,45,56,78};
    for(auto it=nums.begin(); it!=nums.end(); it++) {
        cout << *it << "   ";
    }

    cout << "Size of nums : "<< nums.size() << endl;
    cout << "Capacity of nums : "<< nums.capacity() << endl;

    cout << "Is vec empty : " << (nums.empty() ? "true" : "false") << endl;

    //Removes last element does not return it
    nums.pop_back();

    cout << "updated vector" << endl;
    for(auto it=nums.begin() ; it!=nums.end(); it++) {
        cout << *it << "   " ;
    }
    cout << endl;

    //to access last element of vector
    int getLast = nums.back();
    cout << "Last elem of vector : " << getLast << endl;

    //at(): Accesses an element with bounds checking.
    int getEle = nums.at(2);
    cout << "ele at index 2 : " << getEle << endl;

    //pushing elem in a vector
    nums.push_back(34);

    
    getLast = nums.back();
    cout << "Last elem of vector : " << getLast << endl;

    //return front element of vector
    int getFront = nums.front();
    cout << "First elem in vector : " << getFront << endl;

    //resize(): Changes the size of the vector.
    nums.resize(10);

    cout << "Updated size : " << nums.size() << endl;
    cout << "capacity of vector : " << nums.capacity() << endl;

    nums.shrink_to_fit();

    cout << "Updated size after shrinking : " << nums.size() << endl;
    cout << "updated capacity of vector : " << nums.capacity() << endl;

    for(auto it=nums.begin(); it!=nums.end(); it++) {
        cout << *it << "   ";
    }

    
}
