//[2,3,4,5,6]
// k = 2
//[5,6,2,3,4]

#include <bits/stdc++.h>
using namespace std;


void rotate(vector<int> &arr, int k){
    int n = arr.size();
    vector<int> temp = arr;
    for(int i = 0; i<arr.size(); i++){
        arr[(i+k)%n] = temp[i];
    }
}

int main(){
    vector<int> v = {2,3,4,5,6};
    rotate(v, 2);
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}