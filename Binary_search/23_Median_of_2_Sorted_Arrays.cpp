#include <bits/stdc++.h>
using namespace std;

// Approach 1: Merge both sorted arrays into one sorted array, then find the median.

double Median_of_Two_Sorted_Arrays(vector<int> nums1, vector<int> nums2) {
    int i = 0;
    int j = 0;
    int k = 0;

    vector<int> arr(nums1.size() + nums2.size());

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
            arr[k++] = nums1[i++];
        } else {
            arr[k++] = nums2[j++];
        }
    }

    while (i < nums1.size()) arr[k++] = nums1[i++];
    while (j < nums2.size()) arr[k++] = nums2[j++];

    int n = arr.size();

    if (n % 2 == 1) {
        return (double)arr[n / 2];
    }

    double ans = ((double)arr[n / 2] + (double)arr[n / 2 - 1]) / 2.0;
    return ans;
}

int main() {
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    cout << Median_of_Two_Sorted_Arrays(nums1, nums2) << endl;
    return 0;
}
