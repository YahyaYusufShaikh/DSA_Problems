#include <bits/stdc++.h>
using namespace std;

//better solutions
void count012(vector<int>& nums) {
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
        for(int i = 0; i<count0; i++) nums[i] = 0;
        for(int i = count0; i<count0+count1; i++) nums[i] = 1;
        for(int i = count0+count1; i<count0+count1+count2; i++) nums[i] = 2;
    }
    cout<<count0<<" "<<count1<<" "<<count2<<endl;
}


//optimal solution
int main(){

    vector<int> num = {0,1,2,0,1,2,1,2,0,0,0,1};
    count012(num);
    for(int i = 0; i<num.size(); i++){
        cout<<num[i]<<" ";
    }
    return 0;
}