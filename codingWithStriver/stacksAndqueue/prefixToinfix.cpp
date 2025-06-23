#include <bits/stdc++.h>

using namespace std;

string prefixToInfix(string s) {

    stack<string> st;

    for(int i=s.length()-1; i>=0; i--) {

        //operand
        if( (s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')) {
            string str = string() + s[i];
            st.push(str);
        }
        //operator
        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();

            string temp = "("+t1+s[i]+t2+")";
            st.push(temp);
        }
    }

    return st.top();
}
int main() {

    string str = "*+PQ-MN";
    string ans = prefixToInfix(str);
    cout << ans << endl;
    
    return 0;
}