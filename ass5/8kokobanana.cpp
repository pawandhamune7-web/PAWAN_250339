#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int totalHours(vector<int> &arr, int speed)
{
    int total = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        total += (arr[i] + speed - 1) / speed;
    }

    return total;
}

int minEatingSpeed(vector<int> &arr, int h)
{
    int low = 1;
    int high = *max_element(arr.begin(), arr.end());

    int ans = high;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        int hours = totalHours(arr, mid);

        if (hours <= h)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> piles = {3, 6, 7, 11};

    int h = 8;

    cout << minEatingSpeed(piles, h);

    return 0;
}