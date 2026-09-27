#include <bits/stdc++.h>
using namespace std;

// Question: Find the sum of two large numbers represented as strings.
//
// Input:
// num1 = "123456789123456789"
// num2 = "987654321987654321"
//
// Output:
// "1111111111111111110"

string Sum_Two_Large_Numbers(string num1, string num2) {
if(num1.size()<num2.size()){
  Sum_Two_Large_Numbers(num2,num1);
}

int j=num2.size()-1;
int carry=0;

for(int k=num1.size()-1;k>=0;k--){

 int number=num1[k]-'0';
 int sum=number+carry;

 if(j>=0){
 int number2=num2[j]-'0';
  sum+=number2;
    j--;
 }

 num1[k]=(sum%10)+'0';
 carry=sum/10;
 
}
if(carry>0){
  num1=char(carry+'0')+num1;
}
return num1;
}
int main() {
    string num1 = "123456789123456789";
    string num2 = "987654321987654321";

    cout << Sum_Two_Large_Numbers(num1, num2);

    return 0;
}
