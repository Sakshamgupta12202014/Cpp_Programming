#include <bits/stdc++.h>

using namespace std;

int priority(char ch) {

    if(ch == '^') return 3;

    if(ch == '*' || ch=='/') return 2;

    if(ch=='+' || ch=='-') return 1;
    return 0;

}

int main() {

    string exp = "a+b*(c^d-e)";
    stack<char> st;
    string ans = "";

    for(int i=0; i<exp.length(); i++) {
        if( (exp[i]>='A' && exp[i]<='Z') || (exp[i]>='a' && exp[i]<='z') || (exp[i]>='0' && exp[i]<='9')) {
            ans += exp[i];
        }
        else if(exp[i]=='(') {
            st.push(exp[i]);
        }
        else if(exp[i]==')') {
            while(!st.empty() && st.top()!='('){
                ans += st.top();
                st.pop();   
            }
            st.pop();
        }
        else{
            while(!st.empty() && priority(exp[i])<=priority(st.top())) {
                ans += st.top();
                st.pop();
            }
            st.push(exp[i]);
        }
    }
    
    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }

    cout << ans;
    return 0;
}