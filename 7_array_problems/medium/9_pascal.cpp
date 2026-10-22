#include <bits/stdc++.h>
using namespace std;


    int main(){

        vector<vector<int>> generate(int numRows);
        


        int row = 5;
        vector<vector<int>> tri;
        tri = generate(row);

         for (auto &r : tri) {
        for (int x : r) {
            cout << x << " ";
        }
        cout << endl;
    }

        return 0;
    }

      vector<vector<int>> generate(int numRows) {
       vector<vector<int>> ansV;
       for(int i = 1; i<=numRows; i++)
       {
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col = 1; col<i; col++)
        {
            ans = ans * (i - col);
            ans = ans / (col);
            ansRow.push_back(ans);
        }
        ansV.push_back(ansRow);
       } 
       return ansV;
    }

  