#include<bits/stdc++.h>
using namespace std;

//array sorted or not
bool isSorted(vector<int> v, int n){
    for(int i = 1; i<n; i++){
        if(v[i]>v[i-1]){

        }else{
            return false;
        }
    }
   
    return true;
}

int main(){

    vector<int> arr = {3, 2, 4, 5, 6};
    vector<int> arr1 = {1,2,3,4,5};

    cout<<isSorted(arr, arr.size())<<endl;
    cout<<isSorted(arr1, arr1.size())<<endl;
    return 0;
}