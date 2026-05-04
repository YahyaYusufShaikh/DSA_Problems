#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1,2,1,3,2}; //normal array

    int hash[13] = {0};     //hasing
    for(int i = 0; i<n; i++){
        hash[arr[i]]++;
    }

    //fetching
    int q = 5;
    // while(q--){
    //     int number;
    //     cin>>number;
    //     cout<<hash[number]<<endl;
    // }

    for(int i = 0; i<13; i++){
        cout<<hash[i]<<" ";
    }

    return 0;
}