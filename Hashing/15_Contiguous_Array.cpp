// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// int Binary_Subarrays_With_Sum(vector<int> nums, int goal) {

//     unordered_map<int, int> mp;

//     // prefix sum 0 has occurred once
//     mp[0] = 1;

//     int prefixSum = 0;
//     int count = 0;

//     for(int i = 0; i < nums.size(); i++) {

//         prefixSum += nums[i];

//         int needed = prefixSum - goal;

//         if(mp.find(needed) != mp.end()) {

//             count += mp[needed];
//         }

//         mp[prefixSum]++;
//     }

//     return count;
// }

// int main() {

//     vector<int> nums = {1,0,1,0,1};
//     int goal = 2;

//     int result = Binary_Subarrays_With_Sum(nums, goal);

//     cout << result;

//     return 0;
// }