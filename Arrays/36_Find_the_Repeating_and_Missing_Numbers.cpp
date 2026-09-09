#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Find the repeating and missing numbers in an array.
//
// Input:
// 3 1 2 5 3
//
// Output:
// Repeating number: 3
// Missing number: 4


vector<int>findMissingRepeatingNumbers(vector<int>num){
  int n=num.size();
  unordered_map<int,int>mpp;
   int repeating = -1;
    int missing = -1;
  for(int i=0;i<n;i++){
    mpp[num[i]]++;
  }

  for(int i=1;i<=n;i++){
    if(mpp[i]==2){
        repeating=i;
    }
    if(mpp[i]==0){
      missing=i;
    }
  }
  return {repeating,missing};
}



int main()
{
vector<int>num={3, 1, 2, 5, 3};
vector<int>result=findMissingRepeatingNumbers(num);
 cout << "Repeating: " << result[0] << endl;
    cout << "Missing: " << result[1] << endl;
}
