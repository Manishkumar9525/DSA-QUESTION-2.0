// Question: Implement atoi, which converts a string to a 32-bit signed integer.
//
// Example Input:
// "   -42"
//
// Example Output:
// -42

#include <climits>
#include <iostream>
using namespace std;

int Atoi(string str) {
    int index=0;
    int sign=1;
    int n=str.length();
    int ans=0;

    while(index<n && str[index]==' '){
      index++;
    }

     if(index<n && (str[index]=='+'|| str[index]=='-')){
      if(str[index]=='-'){
        sign=-1;
      }
      index++;
    }
   
   

     while(index<n && str[index]>='0' && str[index]<='9'){
       int digit=str[index]-'0';
       ans=ans*10+digit;
       if(sign==1 && ans>INT_MAX){
        return INT_MAX;
       }
        if(sign==-1 && -ans<INT_MIN){
        return INT_MIN;
       }
       index++;
     }
     return ans*sign;

}

int main() {
    string str = "   -42";

    int result = Atoi(str);

    cout << result;

    return 0;
}
