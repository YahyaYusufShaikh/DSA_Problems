// set stores unique elements and it is dynamic in nature
// it stores the elements in sorted order
// everyt operation takes log(n)

#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int>st; 
    st.insert(1);
    st.insert(2);
    st.emplace(3);
    st.insert(6);
    st.insert(5);
    st.insert(10);

    for(auto it: st){
        cout<<it<<" ";
    }
    auto it1 = st.find(2);  //pointer will points the 2 
    auto it2 = st.find(5);  //pointer will points the 5
    cout<<st.count(5)<<endl;
    st.erase(it1, it2); //it will remove the elements from it1(2) to befire it2(5)
    for(auto it: st){
        cout<<it<<" ";
    }
    cout<<endl;
    auto it3 = st.lower_bound(5);
    cout<<*(it3)<<endl;
    auto it4 = st.upper_bound(6);
    cout<<*(it4)<<endl;




}