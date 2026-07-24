#include <bits/stdc++.h>
using namespace std;
//better solution
int majority(vector<int>v){
    map<int, int> mpp;
    for(int i = 0; i<v.size(); i++){
        mpp[v[i]]++;
    }
    for(auto it: mpp){
        if(it.second > v.size()/2){
            cout<< it.first <<" "<<it.second<<endl;
        }
    }
    return -1;
}

//moore's voting algorithm
int majorityEl(vector<int>v){
    int el, count = 0;
    for(int i = 0; i<v.size(); i++){
        if(count == 0){
            el = v[i];
            count = 1;
        }else if(v[i] == el){
            count++;
        }else{
            count--;
        }
    }
    int cnt1 = 0;
    for(int i = 0; i<v.size(); i++){
        if(v[i] == el){
            cnt1++;
        }
    }
    if(cnt1 > (v.size()/2)){
            return el;
    }
    return -1;
  }
int main(){

    vector<int>v = {2,2,1,3,1,1,3,1,1};
    cout<<majority(v);
    cout<<majorityEl(v);
    return 0;
}