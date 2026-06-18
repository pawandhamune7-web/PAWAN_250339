#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    int n = nums.size();

    int windowSum = 0 ;

    for (int i = 0; i < k; i++) {
        windowSum += nums[i];
    }

    int maxSum = windowSum;

        for (int i = k; i < n; i++) {
        windowSum = windowSum - nums[i - k] + nums[i];

        maxSum = max(maxSum, windowSum); 
        }

    return (double)maxSum / k;
}

int main() {
    int n , k ; 
    cin >> n  >> k ;

    vector<int> nums(n) ;

    for(int i = 0 ; i < n ; i++ ){
        cin >> nums[i] ;
    }

    double answer = findMaxAverage(nums, k);

    cout << answer << endl;

    return 0;
}