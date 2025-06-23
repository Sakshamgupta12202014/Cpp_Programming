#include <bits/stdc++.h>

using namespace std;

// Reverse a stack in O(1) Auxiliary space

void insert_at_bottom(stack<int> &st,int elem){
    //base case
    //if stack is empty then push elem
    if(st.empty()){
        st.push(elem);
        return;
    }

    int top=st.top();
    st.pop();
    insert_at_bottom(st,elem);
    st.push(top);
}

void reverse_stack(stack<int> &st){
    if(st.empty()){
        return;
    }

    int top = st.top();
    st.pop();
    reverse_stack(st);
    insert_at_bottom(st,top);

}

int main() {

    int elem=0;
    stack<int> st;
    st.push(1);  //bottom element
    st.push(2);
    st.push(3);
    st.push(4);

    // while(!st.empty()){
    //     cout << st.top() << endl;
    //     st.pop();
    // }

    cout << endl;
    // insert_at_bottom(st,elem);  
    reverse_stack(st);  

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}