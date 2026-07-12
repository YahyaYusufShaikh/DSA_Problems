#include <bits/stdc++.h>
using namespace std;

int getSingle(vector<int> arr){
    int XOR = 0;
    for(int i = 0; i<arr.size(); i++){
        XOR = XOR^arr[i];
        cout<<XOR<<" "<<endl;
    }
    return XOR;
}
int main(){

    vector<int> arr = {1,1,2,2,3,4,4};
    cout<<getSingle(arr);
    return 0;
}