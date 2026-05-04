//stack is LIFO in nature
//LIFO means Element insert last will be deleted first and it is dynamic in nature
//Last In First Out
//three general functions of stack are push, pop, top

#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#include <stack>
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<endl;
    st.pop();

    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;
    
    stack<int>st1;
    st1.push(1);

    st1.swap(st);

    cout<<st1.top()<<endl;
    cout<<st.top()<<endl;
    st1.top()+=5;  //+= will add 5 to top 5 + 2 = 7
    cout<<st1.top()<<endl;
    return 0;
}