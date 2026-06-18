#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {

    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {

        if (mp.count(nums[i])) {

            int previousIndex = mp[nums[i]];

            if (i - previousIndex <= k) {
                return true;
            }
        }

        mp[nums[i]] = i;
    }

    return false;
}

int main() {

    vector<int> nums = {1, 2, 3, 1};
    int k = 3;

    if (containsNearbyDuplicate(nums, k)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}