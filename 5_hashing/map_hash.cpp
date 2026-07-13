#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 7;
    int arr[n] = {1,2,3,1,3,2,12}; //normal array

    map<int, int> mpp;
    for(int i = 0; i<n ; i++){
        mpp[arr[i]]++;
    }

    for(auto it: mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<endl<<endl;

    //fetching
    int q = 5;
    while(q--){
        int num;
        cin>>num;1
        cout<<mpp[num]<<endl;
    }

    return 0;
}