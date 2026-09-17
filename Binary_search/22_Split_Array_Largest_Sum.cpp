#include <bits/stdc++.h>
using namespace std;

// Split Array - Largest Sum
// We need to split the array into exactly k non-empty subarrays such that
// the largest subarray sum is minimized.

int SubarraysNeeded(const vector<int>& nums, int maxSum) {
    int subarrays = 1;
    int currentSum = 0;

    for (int value : nums) {
        if (currentSum + value <= maxSum) {
            currentSum += value;
        } else {
            subarrays++;
            currentSum = value;
        }
    }

    return subarrays;
}

int Split_Array_Largest_Sum(const vector<int>& nums, int k) {
    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (SubarraysNeeded(nums, mid) <= k) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

int main() {
    vector<int> nums = {7, 2, 5, 10, 8};
    int k = 2;

    cout << Split_Array_Largest_Sum(nums, k) << endl;
    return 0;
}
