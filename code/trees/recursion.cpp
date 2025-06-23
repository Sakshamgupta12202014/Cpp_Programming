#include <bits/stdc++.h>

using namespace std;

void solve(string &str, int i, string &temp , set<string> &ans){
    if(i>=str.length()){
        ans.insert(temp);
        return;
    }

    temp.push_back(str[i]);
    solve(str,i+1,temp,ans);
    temp.pop_back();
    solve(str,i+1,temp,ans);
    return;
}
int main() {
    string str="gfg";
    set<string> s;
    string temp="";    
    solve(str,0,temp,s);

    for(auto it:s){
        cout << it << "  ";
    }
    
    return 0;
}