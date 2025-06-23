#include <bits/stdc++.h>

using namespace std;

string removeDuplicates(string s) {
    string res = "";
    for (char c : s)
        if (res.find(c) == string::npos) res += c;
    return res;
}

int main() {

    string s="aaabsbadedbw";
    string res = removeDuplicates(s);
    cout << res;
    return 0;
}