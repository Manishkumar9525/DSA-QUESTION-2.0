#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Given an integer array, determine whether it contains any duplicate values.
// Input: nums = [1, 2, 3, 1]
// Output: true

bool Contains_Duplicate(vector<int>num){
     int n=num.size();
     unordered_map<int,int>mp;
     for(int i=0;i<n-1;i++){
        mp[num[i]]++;
        if(mp[num[i]==2]){
            return true;
        }
     }

    return false;
}



int main() {
    vector<int>num={1, 2, 3, 1};
    bool result=Contains_Duplicate(num);
    if(result){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
