#include <bits/stdc++.h>
using namespace std;


//Brute Force approch

vector<vector<int>> Brotate(vector<vector<int>>& matrix){
    int n = matrix.size();
    vector<vector<int>> ans;
    for(int i = 0; i<matrix[0].size(); i++){
        for(int j = 0; j<matrix[0].size(); j++){
            ans[j][n-1-i] = matrix[i][j];
        }
    }
    return ans;
} 

int main(){

    

    return 0;
}