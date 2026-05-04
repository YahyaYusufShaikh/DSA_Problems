#include <iostream>
using namespace std;


void nfun(int i, int n){
    if(i>n) return;
    cout<<"Yahya"<<endl;
    nfun(i+1,n);
}
//1 print name n times
void name(){
    int n;
    cin>>n;
    nfun(1,n);
}


//2 print linearly from 1 to N
void linear(int i , int n){
    if(i>n) return;
    cout<<i<<" ";
    linear(i+1, n);
}

//3 print N to 1
void reverse(int i, int n){
    if(i<1) return;
    cout<<i<<" ";
    reverse(i-1,n);
}


//4 print 1 to N using backtracking
void Nback(int i, int n){
    if(i<1) return;
    Nback(i-1, n);
    cout<<i<<" ";
    
}


//5 print N to 1 using backtracking

void Nback2(int i, int n){
    if(i>n) return;
    Nback2(i+1, n);
    cout<<i<<" ";
}

int main(){
    name();
    linear(1,10);
    cout<<endl;
    reverse(10,10);
    cout<<endl<<"1 to N using Back tracking"<<endl;
    Nback(4,4);
    cout<<endl<<"N to 1 using Back tracking"<<endl;
    Nback2(1,4);
    return 0;
}