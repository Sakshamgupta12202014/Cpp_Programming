#include <bits/stdc++.h>

using namespace std;

int t_o_h(int n, string src, string dest, string helper){
    
    int cnt=0;
    if(n==0){
        return 0;
    }
    if(n==1){
        cout << "Moved : " << n << "th from " << src << " to " << dest << endl;
        return 1;
    }
    

    cnt += t_o_h(n-1, src, helper, dest);         //i will return moves required to relocate n-1 disks from src to dest
    cnt++;
    cout << "Moved : " << n << "th from " << src << " to " << dest << endl;
    cnt += t_o_h(n-1,helper,dest,src);   
    
    return cnt;   //end mei total moves return kr do . .
}

int main() {

    int n=12;
    int steps=t_o_h(n,"Source", "Destination", "Helper");
    cout << steps << endl;
    return 0;
}