#include <bits/stdc++.h>

using namespace std;

void print(set<char> chars){
    for(auto it : chars){
        cout << it << "  ";
    }
    cout << endl;
}
int main() {

    set<char> st;
    string s="xyzwjshndnrufbgacnrtopwqlk";

    for(int i=0; i<s.length(); i++){
        st.insert(s[i]);
    }

    print(st);

    return 0;
}