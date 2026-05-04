#include <bits/stdc++.h>
using namespace std;


void divisor(int n){  //this solution is big 0(n) time taking
    for(int i = 1; i <=n; i++){
        if(n % i == 0) cout<<i<<" ";
    }
    cout<<endl;
}

void t_divisor(int n){
    vector<int> ls;

    for(int i = 1; i*i<=n; i++){
        if(n%i==0){
            // cout<<i<<" ";
            ls.push_back(i);
            if(n/i != i){
                cout<<n/i<<" ";
                ls.push_back(n/i);
            }
        }
    }
    cout<<endl;
    sort(ls.begin(), ls.end());
    for(auto it: ls){
        cout<<it<<" ";
    }
}


int main(){
    int n = 36;
    divisor(n);
    t_divisor(n);
    return 0;
}