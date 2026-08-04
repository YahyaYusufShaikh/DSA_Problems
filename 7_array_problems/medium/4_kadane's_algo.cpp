#include <bits/stdc++.h>
using namespace std;

long long maxSubArray(vector<int> &nums){
    long long sum = 0, maxi = LONG_MIN;
    for(i = 0; i<nums.size(); i++){
        sum += nums[i];
        if(sum > maxi) maxi = sum;
        if(sum < 0) sum = 0;
    }
    return maxi;
}

int main(){
    
    vector<int>v = {2,2,1,3,1,1,3,1,1};


    cout<<"Started \n\n";
    return 0;
}