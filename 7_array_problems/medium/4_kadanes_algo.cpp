#include <bits/stdc++.h>
using namespace std;

long long maxSubArray(vector<int> &nums){
    long long sum = 0, maxi = LONG_MIN;
    int start, ansStart = -1, ansEnd = -1;
    for(int i = 0; i<nums.size(); i++){
        if(start == 0) start = i;
        sum += nums[i];
        if(sum > maxi){
            maxi = sum; 
            ansStart = start;
            ansEnd = i;
        }
        if(sum < 0) {
            sum = 0;
            start = i+1;
        };

    }

        cout<<"Sub Array "<<endl;
        for(int j = ansStart; j<=ansEnd; j++){
            cout<<nums[j]<<" ";
        }
        cout<<endl;
    return maxi;
}


int main(){
    
    vector<int>v = {-2,1,-3,4,-1, -2, 1, 5, -3};
    cout<<maxSubArray(v);
    return 0;
}