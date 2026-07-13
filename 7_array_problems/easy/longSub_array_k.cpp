#include <bits/stdc++.h>
using namespace std;

//better and optimal solution
int longestSubArrayWithSumK(vector<int> a, long long K){
    int left = 0, right = 0, maxlen = 0, n = a.size();
    long long sum = a[0];
    while(right < n){
        while(left <= right && sum > K){
            sum -= a[left];
            left++;
        }
        if(sum == K){
            maxlen = max(maxlen, right - left + 1);
        }
        right++;
        if(right < n) sum += a[right];
    }
    return maxlen;
}


int main(){

    vector<int> arr {1,2,0,0,3,3,1,1,1,1,4,5,3,6,4,2};

    cout<<longestSubArrayWithSumK(arr, 6);
    return 0;
}