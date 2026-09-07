#include <iostream>
#include<bits/stdc++.h>
using namespace std;


// Question: Find all the elements that appear more than N/3 times in an array.
    //
    // Input:
    // 7
    // 3 2 3 1 2 3 2
    //
    // Output:
    // 2 3



vector<int>Majority_Elements(vector<int>&ans){
  int n=ans.size();
  int maxi=int(n / 3) + 1;
  vector<int>result;
  unordered_map<int,int>mpp;

  for(int i=0;i<n;i++){
    mpp[ans[i]]++;
    if(mpp[ans[i]]==maxi){
      result.push_back(ans[i]);
    }
    if(result.size()==2){
      break;
    }
  }
return result;
}



 

int main()
{
    vector<int>ans={1, 2, 1, 1, 3, 2, 2};
    vector<int>result=Majority_Elements(ans);
    for(int i:result){
      cout<<i<<" ";
    }

    return 0;
}
