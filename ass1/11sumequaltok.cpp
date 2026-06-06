#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mp;

    mp[0] = 1;

    int prefixSum = 0;
    int count = 0;

    for (int x : nums) {
        prefixSum += x;

        int need = prefixSum - k;

        if (mp.find(need) != mp.end()) {
            count += mp[need];
        }

        mp[prefixSum]++;
    }

    return count;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << subarraySum(nums, k);

    return 0;
}