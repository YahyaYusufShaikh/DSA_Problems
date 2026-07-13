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


//negative numbers
int getLongestSubArray(vector<int> a, int K){
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxlen = 0;
    for(int i = 0; i<a.size(); i++){
        sum += a[i];
        if(sum == K){
            maxlen = max(maxLen, i+1);
        }
        long long rem = sum - K;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()) preSumMap[sum] = i;
    }
    return maxlen;
}

int main(){

    vector<int> arr {1,2,0,0,3,3,1,1,1,1,4,5,3,6,4,2};

    cout<<longestSubArrayWithSumK(arr, 6);
    cout<<getLongestSubArray(arr, 6);
    return 0;
}