#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> v;  //vector is defined
    v.push_back(1); //1 iss instered at the end using push_back
    v.emplace_back(2); //2 is inserted at the end using emplace_back
    cout << v[0]<<" "<<v[1] << endl;

    vector<pair<int, int>> v1; //an empty vector is created using pair of integer
    v1.push_back({1, 2});
    v1.emplace_back(3, 4); //emplace_back doesn't need curly braces it faster then push_back
    cout << v1[0].first << " " << v1[0].second << endl;
    cout << v1[1].first << " " << v1[1].second << endl;

    vector<pair<int, string>>v2;
    v2.push_back({1, "Hello"});
    cout<< v2[0].first<<" "<<v2[0].second<<endl;

    
    vector<int>v4(5, 20); //vector of size 5 and all elements are 20 
    vector<int>v3(v); //v2 is a copy of v

    vector<int>::iterator it = v4.begin();
    it++;
    cout<<*(it)<<" ";

    it = it+2;
    cout << *(it) << endl;

    v4[3] = 30;
    v4[2] = 10;
    v4[4] = 50;
    vector<int>::iterator itr = v4.end();  //.end() will point to the after last element of the vector 
    cout<<*(--itr)<<endl; //itr-- will point to the last element

    vector<int>::reverse_iterator itrr = v4.rend(); //rend() will point to the before first element
    cout<<*(--itrr)<<endl;
    // cout<<*(itrr--);
    vector<int>::reverse_iterator itrrr = v4.rbegin(); //rbegin() will point to the last element
    cout<<*(itrrr)<<endl;


    //indexing the vector
    cout<<v4[0]<<" "<<v4.at(0)<<endl;
    cout<<v4.back()<<endl;


    for(vector<int>::iterator it = v4.begin(); it != v4.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto a = v4.begin(); a != v4.end(); a++){ //auto will automatically defines it as vector<int>::iterator
        cout<<*(a)<<" ";
    }
    cout<<endl;

    //for each with auto
    for(auto a: v4){
        cout<<a<<" ";
    }


    cout<<endl;
    cout<<endl;
    //erasing 
    vector<int>v5 = {10, 20, 30, 40, 50, 60, 70};
    v4.erase(v4.begin()); //erase the first element and begin()+1 will remove the second element
    for(auto a: v5){
        cout<<a<<" ";
    }
    cout<<endl;

    vector<int>v6 = {10, 20, 30, 40, 50, 60, 70};
    v6.erase(v6.begin()+1, v6.begin()+5); //erase the element from begin()+1 to before begin()+5
     for(auto a: v6){
        cout<<a<<" ";
    }
z


    cout<<endl;
    cout<<endl;


    //insertion

    vector<int>v7(2, 100);// no. of elements and value
    v7.insert(v7.begin(), 2);
    v7.insert(v7.begin()+1, 4);
    v7.insert(v7.begin()+2, 2, 200); //inserting 200 twice at begin()+2
    vector<int> copy(2,8);
    v7.insert(v7.end(), copy.begin(), copy.end()); //inserting copy at the end with copy.begin() and copy.end
    for(auto a: v7){
        cout << a << " ";
    }
    
    //few more functions

    cout<<endl;
    cout<<v7.size()<<endl;
    v7.clear();
    cout<<v7.empty();

    return 0;


}