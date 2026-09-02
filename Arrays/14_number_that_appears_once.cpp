#include<iostream>
#include<vector>
#include<set>
#include <unordered_map>
#include <algorithm>
using namespace std;


int number_that_appears_once(int arr[],int s){
  int ans=0;
  for(int i=0;i<s;i++){
    ans=ans^arr[i];
  }
  return ans;
}

int main(){
//==========================Find the number that appears once, and the other numbers twice

int arr[]={4,1,2,1,2};
int size=sizeof(arr)/sizeof(arr[0]);
int ans=number_that_appears_once(arr,size);
cout<<ans;
}
