#include <bits/stdc++.h>
using namespace std;


//better solutions
string twoSum(vector<int>& nums, int target){
    map<int, int> mpp;
    for(int i = 0; i<nums.size(); i++){
        int a = nums[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end()){
            return "Yes";
        }
        mpp[a] = i;
    }
}

//optimal solutions:
string twoSumOp(vector<int>& nums, int target){
    int left = 0, right = nums.size()-1;

    sort(nums.begin(), nums.end());
    while(left < right){
        int sum  = nums[left] + nums[right];
        if(sum == target){
            return "Yes";
        }
        else if(sum < target) left++;
        else right--;
    }
    return "No";
}

int main(){
    vector<int> v = {4, 1, 2, 3, 1};
    cout<<twoSum(v, 5);
    cout<<endl;
    cout<<twoSumOp(v, 5);
    
    return 0;
}