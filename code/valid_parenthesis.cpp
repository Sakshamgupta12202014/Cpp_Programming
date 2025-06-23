#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> ans;

void f(int n, int idx, int open,vector<string> temp){

    if(idx==n){
        if(open==0) {
            ans.push_back(temp);
        }
        return ;
    }

    temp.push_back("(");
    f(n,idx+1,open+1,temp);
    temp.pop_back();

    if(open>0){
        temp.push_back(")");
        f(n,idx+1,open-1,temp);
        temp.pop_back();
    }
}

int main() {

    int s=6;
    vector<string> brac;
    f(s,0,0,brac);

    for(auto it1: ans){
        for(auto it2: it1){
            cout << it2;
        }
        cout << endl;
    }
    return 0;
}