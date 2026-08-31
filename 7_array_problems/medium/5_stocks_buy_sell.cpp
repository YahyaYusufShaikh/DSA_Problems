#include <bits/stdc++.h>

using namespace std;

int maximumProfit(vector<int> &prices){
    int mini = prices[0];
    int maxProfit = 0;

    for(int i = 1; i<prices.size(); i++){
        int cost = prices[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, prices[i]);
    }
    return maxProfit;

}

int main(){

    vector<int>v = {7, 1, 4, 5, 2, 6};

    cout<<maximumProfit(v);

    return 0;
}