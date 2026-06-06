#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != i)
            return i;
    }

    return nums.size();
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << missingNumber(nums);

    return 0;
}