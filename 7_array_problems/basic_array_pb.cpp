#include<bits/stdc++.h>
using namespace std;

//finding largest element in array
int largetst(vector<int> &arr, int n){
    int max = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]>max) max = arr[i];
    }
    return max;
}

int main(){

    vector<int> arr = {3, 4, 7, 12, 9};
    cout<<largetst(arr, arr.size());

    return 0;
}