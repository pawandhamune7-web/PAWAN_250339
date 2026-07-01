#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int requiredays(const vector<int> &weights, int capacity) {
    int days = 1;
    int load = 0;

    for (int weight : weights) {
        if (load + weight <= capacity) {
            load += weight;
        } else {
            days++;
            load = weight;
        }
    }
    return days;
}

int shipwithindays(const vector<int> &weights, int days) {
    int high = 0;
    int low = *max_element(weights.begin(), weights.end());

    for (int weight : weights)
        high += weight;

    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        int neededays = requiredays(weights, mid);

        if (neededays <= days) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;
    int result = shipwithindays(weights, days);
    cout << result;
    return 0;
}
