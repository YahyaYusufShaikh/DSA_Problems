#include <bits/stdc++.h>
using namespace std;

void prime(int n){
    int counter = 0;
    for(int i = 1; i*i<=n; i++){
        if(n%i==0){
            counter++;
            if(n/i != i){
                counter++;
            }
        }
    }
    if(counter == 2) cout<<"Yes Prime No."<<endl;
    else cout<<"Not Prime No."<<endl;
}

int main(){
    int n = 35 ;
    prime(n);

    return 0;
}