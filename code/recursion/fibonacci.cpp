#include <bits/stdc++.h>

using namespace std;

int find_nth_fibonacci(int nth){

    if(nth == 1) return 0;      //1st fibonacci number 
    if(nth == 2) return 1;      //2nd fibonacci number

    // trust recursion it will  find 
    int p1 = find_nth_fibonacci(nth-1);    //recursion--> pahle first predecessor ko find karo
    int p2 = find_nth_fibonacci(nth-2);    //recursion--> fir second predecessor ko find kr la

    return (p1+p2);    //dono predecessor ko find krne ke baad , apne aage wale ko bhj do
}

// Mai bas above written code ko thoda edit kr ke lekh raha hun then woh nth find krne ki jagah n tak print kr dega
int print_fibonacci_upto(int n) {
    // Base cases
    if(n == 1) {
        cout << "0 ";
        return 0;
    }
    if(n == 2) {
        cout << "0 1 ";
        return 1;
    }

    // Get previous values
    int p1 = print_fibonacci_upto(n-1);
    int p2 = print_fibonacci_upto(n-2);
    
    // Calculate current value
    int current = p1 + p2;
    
    // Print only if this is the first time we're calculating this value
    // (This is still not ideal - see better solution below)
    cout << "(" <<current << ") ";
    
    return current;
}


int main() {
    int n=6;

    // int num = findNthFibonacci(n);
    // cout << num << endl;


    print_fibonacci_upto(5);
    return 0;
}