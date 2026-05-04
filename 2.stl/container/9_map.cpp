//map sotres the values in key->value pair
//value can be duplicate but key can not be duplicate
//key should be unique and stores in sorted order
//time coplexity is O(log(n))
//map key => value

#include <bits/stdc++.h>
using namespace std;
#include<map>

int main(){

    map<int , int>mpp;
    // map<int, pair<int, int>>mpp;
    // map<pair<int, int>, int>mpp;

    mpp[1] = 2;
    mpp.emplace(3,2);
    mpp.insert({2, 4});
    for(auto it : mpp){
        cout << it.first<<"->" << it.second << endl;
    }

    cout << mpp[1] << endl;  //value at key 1;
    cout << mpp[3] << endl;
    cout << mpp[5] << endl;  //it will show 0 if key is not present

    auto it = mpp.find(3);
    cout << it->first << " "<< it->second << endl; // -> => member access operator() or *()
    
    auto it1 = mpp.lower_bound(2); //returns the first element greater than or equal to 2
    auto it2 = mpp.upper_bound(3); //returns the first element greater than 3
    // cout << endl << it1 << " "<< it2 << endl;
    // others functions are remains same as
    // erase, swap, size, empty, clear


    //multimap can soters multiple keys or duplicate keys
    //but in sorted order

    //unordered_map can store values in any order
    //unordered_map stores unique keys but in unsorted order

    //map is logn and 
    //multimap is O(log(n))
    //unordered_map is O(1) and sometimes worst as O(n)
    return 0;
}