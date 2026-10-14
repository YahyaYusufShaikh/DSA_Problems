#include <bits/stdc++.h>

using namespace std;

vector<int> LeadArray(vector<int>&nums ){
    vector<int> ans;
    int maxi = INT_MIN;
    int n = nums.size();
    int i;
    for(i = n-1; i>=0; i--){
        if(nums[i]>maxi) ans.push_back(nums[i]);
        maxi = max(maxi, nums[i]);
        cout<<maxi<<endl;
    }
    
    return ans;
}

int main(){

    vector<int> v = {10, 22, 12, 3, 0, 6};
    vector <int> a = LeadArray(v);
     for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}

