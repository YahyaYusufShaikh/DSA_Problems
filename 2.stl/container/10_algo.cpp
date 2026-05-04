//there are so many algorithms in stl
//we will foucus on some of them

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


    bool comp(pair<int, int>a, pair<int, int>b){
        if(a.second < b.second) return true;
        if(a.second > b.second) return false;
        if(a.first > b.first) return true;
        return false;


    }
int main() {
    //sorting array
    int arr[] = {5,3,9,5,3,2,8};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+arr_size);  //sorts the array with inbult sort function in ascending order
    //sort basicall sorting the array from start index to end as (arr[0], arr[7])
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<endl;
    sort(arr, arr+arr_size, greater<int>());  //sorts the array in descending order
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<endl;
    int maxi = *max_element(arr, arr+arr_size);
    cout<<maxi<<endl;
    cout<<endl;
    cout<<endl;


    //sorting the vector
    vector<int>v = {6,1,8,3,9,4,0,2,7,9};
    sort(v.begin(), v.end());  //sorting the vector from begin to end 
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<endl;




    //sorting a pair
    pair<int, int> p[] = {{1,2} ,{2,1}, {4,1}};
    //sort it according to second element
    //if second elemet is same, then sort
    //it according to first element but in descending order
    int n = sizeof(p)/sizeof(p[0]);
    sort(p, p+n, comp);  //sorts the pair according to comp function

    for(auto it : p){
        cout<<it.first<<" "<<it.second<<endl;
    }




    int num = 7;
    int cnt = __builtin_popcount(num);  //returns the number of 1's in the binary representation of num
    cout<<cnt<<endl;

    long long l = 24523452435;
    cout<<__builtin_popcountl(l)<<endl;


    string s = "123";
    do
    {
        cout<<s<<endl;
    } while (next_permutation(s.begin(), s.end()));
    
    return 0;
}