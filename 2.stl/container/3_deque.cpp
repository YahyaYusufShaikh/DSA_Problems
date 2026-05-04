//similar to vector and list but it is a doubly linked list and it is dynamic in nature.

#include <bits/stdc++.h>
using namespace std;
#include<deque>

int main(){

    deque<int>dq = {1,2,3,4,5}; //deque is defined
    dq.push_front(6); //6 is inserted at the beginning of the deque
    dq.push_back(7); //7 is inserted at the end of the deque
    dq.pop_front(); //1 is deleted from the beginning of the deque
    dq.pop_back(); //5 is deleted from the end of the deque
    for(auto it : dq){ //for loop is used to print the deque
        cout<<it<<" ";
    }

    cout<<endl;
    cout<<dq.size();

    //remaining functions are same as vector and list

    return 0;

}