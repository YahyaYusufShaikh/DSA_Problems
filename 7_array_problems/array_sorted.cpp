#include<bits/stdc++.h>
using namespace std;

//array sorted or not with rotation
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        return count <= 1;
    }

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
    cout<<arr.size();
    cout<<arr1[(4+1)%4];
    cout<<endl;
    cout<<check(arr);
    return 0;
}