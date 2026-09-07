#include <iostream>
#include<bits/stdc++.h>
using namespace std;



// Question: Write a program to generate Pascal's Triangle.
    //
    // Input:
    // 5
    //
    // Output:
    //     1
    //    1 1
    //   1 2 1
    //  1 3 3 1
    // 1 4 6 4 1



vector<int>generateROW(int n){
  vector<int>result;
  int ans=1;
  result.push_back(ans);
  for(int i=1;i<n;i++){
    ans=ans*(n-i);
    ans=ans/i;
    result.push_back(ans);
  }
  return result;
}


vector<vector<int>>PascalTrinagel(int &n){
  vector<vector<int>>ans;
  for(int i=1;i<=n;i++){
    ans.push_back(generateROW(i));
  }
  return ans;

}


int main()
{
    
  cout<<"enter the number of row for pascal :- ";
  int n;
  cin>>n;
  vector<vector<int>>ans=PascalTrinagel(n);
  for( auto i:ans){
    for(auto j:i){
      cout<<" "<<j;
    }
    cout<<endl;
  }
    return 0;
}
