//its also a set stores unsorted values
//we can not store duplicate values here
//doesn't support upper bound and lower bound
//time coplexity is O(1)
//and some times big O(n)


#include <bits/stdc++.h>
using namespace std;
#include<unordered_set>
int main(){
    unordered_set<int>us;
    us.insert(1);
    us.insert(2);
    us.insert(10);
    us.insert(9);
    us.insert(100);
    us.insert(8);
    us.insert(9);

    for(auto it : us){
        cout<<it<<" ";
    }


    return 0;
}