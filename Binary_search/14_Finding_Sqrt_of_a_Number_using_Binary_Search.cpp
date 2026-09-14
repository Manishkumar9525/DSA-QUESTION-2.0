#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// Question: Find the square root of a number using Binary Search.
    // Input: 25
    // Output: 5

    int Finding_Sqrt_of_a_Number_using_Binary_Search(int num){
      int s=1;
      int e=num/2;
      while(s<=e){
        int mid=s+(e-s)/2;
        long long sqr=mid*mid;
        if(sqr==num){
          return mid;
        }else if(sqr<num){
          s=mid+1;
        }else{
          e=mid-1;
        }

      }
      return -1;
    }

int main() {
    int number=28;
    int result=Finding_Sqrt_of_a_Number_using_Binary_Search(number);
    cout<<result;

    return 0;
}
