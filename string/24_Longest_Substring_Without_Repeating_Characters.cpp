#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: Find the length of the longest substring without repeating characters.
//
// Input:
// String = "abcabcbb"
//
// Output:
// 3


int Longest_Substring_Without_Repeating_Characters(string s){
   int frequency[26] = {0};

    int right = 0;
    int left = 0;
    int maxi = 0;

    while(right < s.size()) {

        int index = s[right] - 'a';

        // If duplicate exists
        while(frequency[index] != 0) {
            frequency[s[left] - 'a']--;
            left++;
        }

        // Add current character
        frequency[index]++;

        // Current window length
        maxi = max(maxi, right - left + 1);

        right++;
    }

    return maxi;
}

int main()
{

  string s="geeksforgeeks";
  int result=Longest_Substring_Without_Repeating_Characters(s);
  cout<<result;
    return 0;
}
