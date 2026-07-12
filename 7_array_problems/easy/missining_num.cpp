#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;
    int num[5] = {1,2,4,5};
    int arr[n+1] = {0};
    for(int i = 0; i<n; i++){
        arr[num[i]] = 1;
    }
    for(int i =1; i<=n; i++){
        if(arr[i]==0){
            cout<<i<<" ";            
        }
    }

//1 Better Solution SUM:

    int n = 5;
    int num[5] = {1,2,4,5};
    int sum = n * (n+1) / 2;
    s2 = 0;
    for(int i = 0; i<n; i++){
        s2 += num[i];
    }
    cout<<sum - s2;
    return 0;
}