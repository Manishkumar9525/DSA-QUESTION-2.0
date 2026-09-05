#include <bits/stdc++.h>
using namespace std;

/*
Question: Rearrange Array Elements by Sign.

Input:
nums = [3, 1, -2, -5, 2, -4]

Output:
[3, -2, 1, -5, 2, -4]
*/


vector<int>Rearrange_Array_Elements_by_Sign(vector<int>ans){
   int n=ans.size();
   vector<int>result(n);
   int pos=0;int neg=1;
   for(int i=0;i<n;i++){
     if(ans[i]>0 && pos<n){
      result[pos]=ans[i];
      pos=pos+2;
     }else if(ans[i]<0 && neg<n){
      result[neg]=ans[i];
      neg=neg+2;
     }
   }
   return result;
}


int main() {

  vector<int>ans={3, 1, -2, -5, 2, -4};
  vector<int>result=Rearrange_Array_Elements_by_Sign(ans);
  for(int i:result){
    cout<<i<<" ";
  }

    return 0;
}