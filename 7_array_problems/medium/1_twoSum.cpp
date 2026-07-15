#include <bits/stdc++.h>
using namespace std;

int twoSum(vector<int>& nums, int target){
    map<int, int> mpp;
    for(int i = 0; i<nums.size(); i++){
        int a = nums[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end()){
            return {mpp[more], i};
        }
    }
}

int main(){
    vector<int> v = {4, 1, 2, 3, 1};

    vector<int> v1 = twoSum(v, 5);

    for(auto it: v1){
        cout<<it<<" ";
    }
    return 0;
}