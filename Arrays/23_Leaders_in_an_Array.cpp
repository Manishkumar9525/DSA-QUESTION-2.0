#include <iostream>
#include<bits/stdc++.h>
using namespace std;






/*
    Question: Find all the leaders in an array.

    Input:
    arr = [10, 22, 12, 3, 0, 6]

    Output:
    [22, 12, 6]
    */


vector<int>Leaders_in_an_Array(vector<int>arr){
  int n=arr.size();
  vector<int>result;
  int maxi=arr[n-1];
  result.push_back(maxi);
  int right=n-2;
  
  while(right>=0){
     if(arr[right]>maxi){
      result.push_back(arr[right]);
      maxi=arr[right];
     }
     right--;
  }
  return result;
}




int main() {


  vector<int>arr={10, 22, 12, 3, 0, 6};
   vector<int>result=Leaders_in_an_Array(arr);
   reverse(result.begin(),result.end());
   for(int i:result){
    cout<<i<<" ";
   }
    

    return 0;
}
