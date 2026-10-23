#include <bits/stdc++.h>
using namespace std;


//Brute Force approch

vector<vector<int>> Brotate(vector<vector<int>>& matrix){
    int n = matrix.size();
    vector<vector<int>> ans(n, vector<int>(n, 0));
    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix.size(); j++){
            ans[j][n-1-i] = matrix[i][j];
        }
    }
    return ans;
} 

//optimal solution
void OptimalRotate(vector<vector<int>>&mat){
    int n = mat.size();
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            swap(mat[i][j] , mat[j][i]);
        }
    }

    for(int i =0; i<n; i++){
        reverse(mat[i].begin(), mat[i].end());
    }

}

int main(){

      vector<vector<int>> matrix = {
        {1,  2,  3,  4,  5,  6},
        {20, 21, 22, 23, 24, 7},
        {19, 32, 33, 34, 25, 8},
        {18, 31, 36, 35, 26, 9},
        {17, 30, 29, 28, 27, 10},
        {16, 15, 14, 13, 12, 11}
    };

    vector<vector<int>> ans = Brotate(matrix);
      for (auto &r : ans) {
        for (int x : r) {
            cout << x << " ";
        }
        cout << endl;
    }
    cout<<"hello";
    cout<<endl;
    cout<<"Optimal solution"<<endl<<endl;

    OptimalRotate(matrix);
    for (auto &r : matrix) {
        for (int x : r) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}