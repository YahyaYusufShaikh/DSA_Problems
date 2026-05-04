#include<iostream>
using namespace std;

// Parameterized Recursion
void pram(int i, int sum){
    if(i<0)
    {
     cout<<sum<<endl;   
     return;
    }
    pram(i-1, sum + i);
}


// Functional Recursion
int fun(int n){
    if(n<0) return 0;
    return n + fun(n - 1);
}


// factorial of N 
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}

void factp(int n, int mul){
    if(n==0){
        cout<<mul<<endl;
        return; 
    }
    factp(n-1, mul * n);
}
int main(){

    pram(3,0);
    cout<<fun(3);
    cout<<endl;
    cout<<fact(3);
    cout<<endl;
    factp(3,1);
    return 0;
}