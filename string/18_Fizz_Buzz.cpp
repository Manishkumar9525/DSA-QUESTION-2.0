#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Fizz Buzz
// Input: 15
// Output: 1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz

vector<string>Fizz_Buzz(int n){
   string FB="FizzBuzz";
   string F="Fizz";
   string B="Buzz";
   vector<string>result;

   for(int i=1;i<=n;i++){
       if(i%3==0 && i%5==0){
          result.push_back(FB);
       }else if(i%3==0){
         result.push_back(F);
       }else if(i%5==0){
        result.push_back(B);
       }else{
        result.push_back(to_string(i));
       }
   }
   return result;
}

int main() {
  int n=10;
  vector<string>ans=Fizz_Buzz(n);
  for(auto x:ans){
    cout<<x<<" ";
  }
  return 0;
}
