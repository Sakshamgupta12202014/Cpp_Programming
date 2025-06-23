#include <bits/stdc++.h>

using namespace std;

int priority(char ch) {
    if(ch == '^') return 3;
    if(ch == '*' || ch=='/') return 2;
    if(ch=='+' || ch=='-') return 1;
    return -1;
}
string infixToPrefix(string exp) {
    //reverse the exp

    reverse(exp.begin(), exp.end());

    //Invert the parenthesis
    int i=0;
    while(i<exp.length()) {
        if(exp[i] == '(') {
            exp[i]=')';
        }
        else if(exp[i] == ')') {
            exp[i]='(';
        }
        i++;
    }

    //infix --> controlled postfix expression
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
            st.pop(); //pop the opening paranthesis too
        }
        else{
            if(exp[i] == '^'){
                while(!st.empty() && priority(st.top()) >= priority(exp[i])){
                    ans += st.top();
                    st.pop();
                }
            }
            else{
                while(!st.empty() && priority(exp[i])<priority(st.top())) {
                    ans += st.top();
                    st.pop();
                }
            }
            st.push(exp[i]);
        }
    }
    while(!st.empty()) {
        ans+=st.top();
        st.pop();
    }

    //reverse the answer
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {

    string exp = "(A+B)*C-D+F";
    string ans = infixToPrefix(exp);
    cout << ans << endl;

    
    
    return 0;
}