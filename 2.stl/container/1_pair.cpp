#include <iostream>
using namespace std;




int main() {
    pair<int, int>p = {1, 3};   //pair of integer
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>>q = {2, {3, 4}};  //pair of pair of integer
    cout << q.first << " "<<q.second.first<<" "<<q.second.second<<endl;
    
    pair<int, string>p1 = {1, "Hello"};     //pair of integer and string
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int, int>arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};    //pair of array
    cout<<arr[0].first<<" "<<arr[0].second<<endl;
    cout<<arr[1].first<<" "<<arr[1].second<<endl;
    cout<<arr[2].first<<" "<<arr[2].second<<endl;
    cout<<arr[3].first<<" "<<arr[3].second<<endl;

    return 0;
}