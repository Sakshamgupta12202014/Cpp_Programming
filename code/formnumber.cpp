#include <bits/stdc++.h>

using namespace std;

int f(int n, int idx, vector<int> prime, vector<int> comp){

    if(idx==n) return 1;

    int ans=0;
    if(idx%2==0){
        for(int i=0; i<prime.size(); i++){
            ans+=f(n,idx+1,prime,comp);
        }
    }
    else{
        for(int i=0; i<comp.size(); i++){
            ans+=f(n,idx+1,prime,comp);
        }
    }
    return ans;
}
int main() {

    int ans= f(4,0,{2,3,5,7},{0,1,4,6,8,9});
    cout << ans;
    return 0;
}