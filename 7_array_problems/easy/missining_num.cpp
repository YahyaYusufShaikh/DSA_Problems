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

    int n1 = 5;
    int sum = n1 * (n1+1) / 2;
    int s2 = 0;
    for(int i = 0; i<n; i++){
        s2 += num[i];
    }
    cout<<sum - s2;


//XOR method for optimal solution


    int XOR1 = 0, XOR2=0;
    int N = n -1;
    for(int i = 0; i<N; i++){
        XOR2 = XOR2 ^ num[i];
        XOR1 = XOR1 ^ (i+1);
        cout<<"1 "<<XOR1<<" "<<"2 "<<XOR2<<endl;
        cout<<"XOR "<<( XOR1^XOR2)<<endl;
    }

    

    return 0;
}