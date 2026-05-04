//its also a set stores sorted values
//we can store duplicate values here

#include <bits/stdc++.h>
using namespace std;
#include<set>

int main(){

    multiset<int>ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);

    for(auto it : ms){
        cout<<it<<" ";
    }

    cout<<endl;
    cout<<ms.count(1)<<endl; //count the 1

    ms.erase((ms.find(1))); //erase only first 1

    for(auto it : ms){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<ms.count(1)<<endl; //count the 1

   
    ms.erase(ms.find(1), std::next(ms.find(1),3)); //erase 1st(1) to before 3rd(1)
    cout<<endl;
    cout<<ms.count(1)<<endl; //count the 1
     for(auto it : ms){
        cout<<it<<" ";
    }
    return 0;
}