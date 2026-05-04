//similar like queue but it is a min and max heap and it is dynamic in nature
//it is a heap and it is a priority queue and it is a max heap and it is a priority queue and it is a min heap and it is a priority queue
//insertion(push) = log(n)
//deletion(pop) = log(n)
//top = 1

#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#include <queue>

int main(){

    priority_queue<int>pq;
    pq.push(1);
    pq.push(2);
    pq.push(8);
    cout<<pq.top()<<endl;
    pq.push(10);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    cout<<endl;
    cout<<endl;



    priority_queue<int, vector<int>, greater<int>>pq1; //max heap
    pq1.push(1);
    pq1.push(2);
    pq1.push(8);
    cout<<pq1.top()<<endl;
    pq1.push(10);
    cout<<pq1.top()<<endl;
    pq1.pop();
    cout<<pq1.top()<<endl;
    cout<<pq1.size()<<endl;
}