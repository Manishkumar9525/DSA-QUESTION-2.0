#include <iostream>
#include<vector>
using namespace std;

/*
Question: Best Time to Buy and Sell Stock.

Input:
prices = [7, 1, 5, 3, 6, 4]

Output:
5
*/


int Stock_Buy_And_Sell(vector<int>price){
  int n=price.size();
  int max_profit=0;
  int min_price=INT16_MAX;
  for(int i=0;i<n;i++){
    if(price[i]<min_price){
      min_price=price[i];
    }else{
      max_profit=max(max_profit,price[i]-min_price);
    }
  }
  return max_profit;
}

int main() {
  vector<int>price={7, 1, 5, 3, 6, 4};
  int ans= Stock_Buy_And_Sell(price);
  cout<<"max profite : "<<ans;
    return 0;
}