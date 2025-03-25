#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size(), i, j;
    
    // Step 1: Find first decreasing element from right
    for (i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) break;
    }

    // Step 2: Find next larger element and swap
    if (i >= 0) {
        for (j = n - 1; j > i; j--) {
            if (nums[j] > nums[i]) break;
        }
        swap(nums[i], nums[j]);
    }

    // Step 3: Reverse remaining elements
    reverse(nums.begin() + i + 1, nums.end());
}

int main() {
    vector<int> arr = {1, 2, 3}; // Example input
    nextPermutation(arr);
    for (int num : arr) cout << num << " ";
    return 0;
}