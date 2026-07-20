#include <bits/stdc++.h>
using namespace std;

//better solutions
int count012(vector<int>& nums) {
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i = 0; i<nums.size(); i++){
        if(nums[i]==0)
        {
            count0++;
        }
        else if(nums[i]==1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
        
    }
}

int main(){

    vector<int> num = {0,1,2,0,1,2,1,2,0,0,0,1};

    return 0;
}