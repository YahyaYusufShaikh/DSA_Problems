#include <bits/stdc++.h>
using namespace std;


//check if number is palindrome
bool reverse(int n){
    int dup = n;
    int rev = 0;
    while(n>0){
        int rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if(rev == dup) return true;
    return false;

    
}
int main(){
    int n = 1221;
    cout<<reverse(n)<<endl;
    return 0;
}