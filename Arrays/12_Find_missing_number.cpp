#include<iostream>
#include<vector>
#include<set>
#include <unordered_map>
#include <algorithm>
using namespace std;


int Find_missing_number(vector<int>&num){
  int ans=0;
  int s = num.size()+1;
  for(int i=1;i<=s;i++){
    ans=ans^i;
  }
  for(int i=0;i<s-1;i++){
    ans=ans^num[i];
  }
  return ans;
}

int main(){
//=======================Find the Missing Number

// vector<int>num={8, 2, 4, 5, 3, 7, 1};
// int ans=Find_missing_number(num);
// cout<<ans;
}
