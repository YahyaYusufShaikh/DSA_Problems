#include <bits/stdc++.h>
using namespace std;

//[2,3,4,5,3,2,1]
//[1,2,3,3,4,5,6] 

//=[2, 3, 4, 5, 3, 1]
vector<int> intersection(vector<int> a, vector<int> b){
    int n1 = a.size();
    int n2 = b.size();
    vector<int> vis(n2, 0);
    vector<int> ans;
    for(int i = 0; i<n1; i++){
        for(int j = 0; j<n2; j++){
            if(a[i]==b[j] && vis[j]==0){
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }
             if(b[j]>a[i]) break;
        }

       
    }

    return ans;
}


vector<int> intersectionOptimal(vector<int>& nums1, vector<int>& nums2) {
      
       int i = 0;
       int j = 0;
       vector<int> ans;
       while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<nums2[j]){
            i++;
        }
        else if(nums2[j] < nums1[i]){
            j++;
        }
        else{
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
        
       }
       return ans;
    }

int main(){
    vector<int> a = {1,2,3,4,5,4,3,2};
    vector<int> b = {1,2,3,3,4,5,6};

    vector <int> v = intersection(a, b);

    for(auto it: v){
        cout<<it<<" ";
    }

    cout<<endl;

    vector<int> v1 = intersectionOptimal(a, b);
    for(auto it: v1){
        cout<<it<<" ";
    }

    return 0;
}