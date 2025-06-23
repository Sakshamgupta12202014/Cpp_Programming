#include <bits/stdc++.h>

using namespace std;

int main() {

    unordered_map<char,int> mp;
    string str="saksham gupta";

    
    for(int i=0; i<str.length(); i++){
        mp[str[i]]++;
    }

    for(auto pair : mp){
        cout << pair.first << ":  " << pair.second << endl; 
    }
    
    return 0;
}