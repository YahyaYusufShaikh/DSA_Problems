#include <bits/stdc++.h>
using namespace std;


vector<int> Union(vector<int> arr1, vector<int> arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();

    set<int> st;
    for(int i=0; i<n1; i++){
        st.insert(arr1[i]);
    }
    for(int i=0; i<n2; i++){
        st.insert(arr2[i]);
    }
    vector<int> v;
    for(auto it: st){
        v.push_back(it);
    }
}

int main(){
    vector<int> a = {1,2,4,5,7,9};
    vector<int> b = {2,3,4,7,10,11};

    vector <int> v = Union(a, b);

    cout<<v.size()<<endl;

    return 0;
}