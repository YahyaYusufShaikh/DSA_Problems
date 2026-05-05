#include<bits/stdc++.h>
using namespace std;


    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int j = 1; j<nums.size(); j++){
            if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }

int main(){
    vector<int> v = {1,2,2,2,3,3,4,5,5,6,7};
    cout<<removeDuplicates(v);
    return 0;
}