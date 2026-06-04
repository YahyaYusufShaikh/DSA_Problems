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

    return v;
}

vector<int> optimal(vector<int> a, vector<int> b){
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> temp;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j]){
                if(temp.size() == 0 || temp.back() != a[i]){
                    temp.push_back(a[i]);
                }
                i++;
        }
        else{
                if(temp.size() == 0 || temp.back() != b[j]){
                    temp.push_back(b[j]);
                }
                j++;
        }
    }
    while(j<n1){
        if(temp.size() == 0 || temp.back() != b[j]){
            temp.push_back(b[j]);
        }
        j++;
    } 
    return temp;  
}


int main(){
    vector<int> a = {1,2,4,5,7,9};
    vector<int> b = {2,3,4,7,10,11};

    vector <int> v = Union(a, b);

    cout<<v.size()<<endl;

    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<endl;

    vector<int> v1 = optimal(a, b);
    for(auto it: v1){
        cout<<it<<" ";
    }

    return 0;
}