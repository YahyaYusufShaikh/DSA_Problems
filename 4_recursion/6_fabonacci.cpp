#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int fun(int n){
    if (n <= 1) return n;
    int first = fun(n-1);
    int last = fun(n-2);
    return first + last;
}
int main(){
    int n = 6;
    cout<<fun(5);
}