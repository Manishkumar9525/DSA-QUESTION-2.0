#include <iostream>
#include<bits/stdc++.h>
using namespace std;


 // Question: Find the minimum eating speed for Koko to eat all bananas within h hours.
    // Input: Piles = {3, 6, 7, 11}, H = 8
    // Output: 4

long long how_much_time(int mid,vector<int>num){
  int total=0;
  for(int i=0;i<num.size();i++){
    total+=(num[i]+mid-1)/mid;
  }
  return total;
}

int Koko_Eating_Bananas(vector<int>&num,int h){
  int s=1;int e=*max_element(num.begin(),num.end());
  
  while(s<=e){
    int mid=s+(e-s)/2;
    long long total_hour=how_much_time(mid,num);
    if(total_hour<=h){
      e=mid-1;
    }else{
      s=mid+1;
    }
  }
  return s;
}


int main() {
   
vector<int>num={7, 15, 6, 3};int h=8;
int result=Koko_Eating_Bananas(num,h);
cout<<result;
    return 0;
}
