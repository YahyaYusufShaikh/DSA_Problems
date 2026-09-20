#include <bits/stdc++.h>
using namespace std;


    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        if(pos.size() > neg.size()){

        }else{
            
        }
    }


int main(){


    return 0;
}
