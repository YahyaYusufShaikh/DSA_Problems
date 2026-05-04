//list is similar to vector but it is a doubly linked list and it is dynamic in nature.
//has similar functions as vector
//in vector insertion is done at the end and costly but in list insertion is done at any position

#include <bits/stdc++.h>
using namespace std;

int main(){

    list<int>l;
    l.push_back(1);
    l.push_front(2);

    l.emplace_back(3);  //inserts 3 at the end of the list
    l.emplace_front(4); //inserts 4 at the beginning of the list

    for(auto it = l.begin(); it != l.end(); it++){
        cout<<*it<<" ";
    }

    // other Functions
    // begin, rbegin, rend, end, size, empty, front, back, swap, insert, emplace, erase, clear

    return 0;
}