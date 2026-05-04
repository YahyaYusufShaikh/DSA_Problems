#include <bits/stdc++.h>
using namespace std;


//reverse the number
//but if number has trailing zeros then it is reverse will not include them
//ex: 10400 will be 

int reverse(int n){ //reverse the number
    int rev = 0;
    while(n>0){
        int rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    return rev;

}
int main(){
    int n = 4002100;
    cout<<reverse(n)<<endl;
    return 0;
}