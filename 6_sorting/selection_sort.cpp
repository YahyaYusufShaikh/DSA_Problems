#include <bits/stdc++.h>
using namespace std;


void selection_sort(int arr[], int n){
    for(int i = 0; i<=n-2; i++){
        int min = i;

        for(int j =i; j<=n-1; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        //swaping
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
int main(){

    int n = 6;
    int arr[n] = {13, 46, 24, 52, 20, 9};

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    selection_sort(arr,n);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}