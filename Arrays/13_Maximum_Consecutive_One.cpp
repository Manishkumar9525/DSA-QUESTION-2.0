#include<iostream>
#include<vector>
#include<set>
#include <unordered_map>
#include <algorithm>
using namespace std;


int Maximum_Consecutive_One(vector<int>&num){
  int cnt=0;
  int max=0;
  for(int i=0;i<num.size();i++){
    if(num[i]==1){
      cnt++;
      if(cnt>max)max=cnt;
    }else{
      cnt=0;
    }
  }
  return max;
}

int main(){
//========================Count Maximum Consecutive One's in the array

// vector<int>num={1, 1, 0, 1, 1, 1};
// int ans=Maximum_Consecutive_One(num);
// cout<<ans<<" ";
}
