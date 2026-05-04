#include <iostream>
using namespace std;

int main()
{
    int n = 334;
    int counter = 0;
    int rem;
    while(n>0){
        rem = n%10;
        n = n/10;
        counter++;
    }
    cout << counter << endl;

    int log = log10(231232);
    int cnt = (int)(log10(2323));
    cout << cnt << endl;

    return 0;
}