#include <iostream>
using namespace std;

// Question: Program to validate an IP address
// Input: 192.168.1.1
// Output: Valid


bool Program_to_Validate_an_IP_Address(string str){
    int ans=0;
    for(int i=0;i<str.length();i++){
       if(str[i]=='.'){
         if(ans>255){
          return false;
         }
         ans=0;
         continue;
       }

       ans=ans*10+(str[i]-'0');
    }
    return true;
}


int main() {
  string str="125.512.100.1";
   if(Program_to_Validate_an_IP_Address(str)){
    cout<<"true";
   }else{
    cout<<"false";
   }
    return 0;
}
