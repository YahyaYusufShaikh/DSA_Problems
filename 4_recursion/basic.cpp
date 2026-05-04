#include <iostream>
using namespace std;

int cnt = 0;
void fun(){
        cout<<cnt<<"\n";
        if(cnt == 5) return;
        cnt++;
        fun();
    }
int main(){
    fun();
    cout<<"Exited";
    return 0;
}