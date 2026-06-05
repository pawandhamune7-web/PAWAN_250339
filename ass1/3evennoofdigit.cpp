#include<iostream>
#include <vector>
using namespace std;

int findnum(vector<int> &nums) {
    int count = 0;
    for (int num : nums) {
        int digits = 0;
        int temp = num;
        if (temp == 0) {
            digits = 1;
        }
        while (temp != 0) {
            digits++;
            temp /= 10;
        }
        if (digits % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = findnum(nums);
    cout << result;

        return 0;
}
