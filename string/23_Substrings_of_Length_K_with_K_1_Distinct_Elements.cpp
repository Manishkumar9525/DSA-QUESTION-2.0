#include <iostream>
using namespace std;

// Question: Find all substrings of length K that contain exactly K - 1 distinct elements.
//
// Input:
// String = "abac"
// K = 3
//
// Output:
// "aba"


// int K_Length_Substrings(string s, int k) {

//     int n = s.length();

//     if(k > n)
//         return 0;

//     unordered_map<char, int> mp;

//     int count = 0;

//     // First window
//     for(int i = 0; i < k; i++) {
//         mp[s[i]]++;
//     }

//     // Check first window
//     if(mp.size() == k - 1) {
//         count++;
//     }

//     // Slide the window
//     for(int i = k; i < n; i++) {

//         // Remove character going out
//         mp[s[i-k]]--;

//         if(mp[s[i-k]] == 0) {
//             mp.erase(s[i-k]);
//         }

//         // Add new character
//         mp[s[i]]++;

//         // Check current window
//         if(mp.size() == k - 1) {
//             count++;
//         }
//     }

//     return count;
// }

// int main() {

//     string s = "aabbcc";
//     int k = 3;

//     cout << K_Length_Substrings(s, k);

//     return 0;
// }
