#include <bits/stdc++.h>
using namespace std;
void armstrong(int n){
    int dup = n;
    int sum = 0;
    while(n>0){
        int rem = n%10;
        sum += rem*rem*rem;
        n = n/10;
    }
    if(sum == dup) cout<<"Yes it is Armstrong Number\n";
    else cout<<"Not Armstrong Number\n";
}

int main(){
    int n = 151;
    armstrong(n);
    return 0;
}