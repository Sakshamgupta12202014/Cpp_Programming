#include <bits/stdc++.h>

using namespace std;

string postfixToInfix(string s) {

    stack<string> st;
    
    for(int i=0; i<s.length(); i++) {

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

            string temp = "("+t2+s[i]+t1+")";
            st.push(temp);
        }
    }

    return st.top();
}

int main() {

    string exp = "AB-DE+F*/";
    string ans = postfixToInfix(exp);
    cout << ans << endl;
    
    return 0;
}