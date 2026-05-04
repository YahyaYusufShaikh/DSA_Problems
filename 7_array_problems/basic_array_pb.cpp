#include<bits/stdc++.h>
using namespace std;

//finding largest element in array
int largetst(vector<int> &arr, int n){
    int max = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]>max) max = arr[i];
    }
    return max;
}

//second largest
int secondLargest(vector<int> &arr, int n){
    int flargest = largetst(arr, n);
    int slargest = -1;
    for(int i = 0; i<n; i++){
        if(arr[i]<flargest && arr[i]>slargest) slargest = arr[i];
    }
    return slargest;
}

int main(){
    vector<int> arr = {3, 4, 7, 12, 9};
    cout<<largetst(arr, arr.size());
    cout<<endl;
    cout<<secondLargest(arr, arr.size());
    return 0;
}