//Queue is FIFO in nature
// FIFO means which element is inserted first will be deleted first and it is dynamic in nature
//First In First Out

#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#include <queue>

int main() {

    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(4);

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();

    cout<<q.front()<<endl;
    cout<<q.size()<<endl;


}