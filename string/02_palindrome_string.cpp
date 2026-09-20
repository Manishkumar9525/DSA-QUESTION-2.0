#include <iostream>
using namespace std;

// Question: Check whether a string is a palindrome.
//
// Input:
// String: madam
//
// Output:
// madam is a palindrome.



bool Palindrome_string(string text){
    string text2=text;
    int s=0;int e= text2.length()-1;
    while(s<=e){
        swap(text2[s],text2[e]);
        s++;e--;
    }
    if(text2==text){
        return true;
    }else{
        return false;
    }
}



int main() {
    string text="madam";
    // cout<<text.length();
    bool result=Palindrome_string(text);
    if(result){
        cout<<"this text is palindrome";
    }else{
        cout<<"text is not Palindrome";
    }

    return 0;
}
