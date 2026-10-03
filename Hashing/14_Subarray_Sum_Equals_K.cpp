// #include <bits/stdc++.h>
// using namespace std;

// // Question: Count the number of continuous subarrays whose sum equals k.
// // Input: nums = [1, 1, 1], k = 2
// // Output: 2

// int Subarray_Sum_Equals_K(const vector<int>& nums, int k) {
//     unordered_map<long long, int> prefixFrequency;
//     prefixFrequency[0] = 1;

//     long long prefixSum = 0;
//     int count = 0;

//     for (int value : nums) {
//         prefixSum += value;

//         auto previous = prefixFrequency.find(prefixSum - k);
//         if (previous != prefixFrequency.end()) {
//             count += previous->second;
//         }

//         prefixFrequency[prefixSum]++;
//     }

//     return count;
// }

// int main() {
//     vector<int> nums = {1, 1, 1};
//     int k = 2;

//     int result = Subarray_Sum_Equals_K(nums, k);
//     cout << result;

//     return 0;
// }
