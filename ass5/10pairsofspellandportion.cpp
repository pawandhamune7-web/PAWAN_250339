#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success)
{
    sort(potions.begin(), potions.end());

    int n = spells.size();
    int m = potions.size();

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int low = 0;
        int high = m - 1;
        int first = m;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if ((long long)spells[i] * potions[mid] >= success)
            {
                first = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        ans.push_back(m - first);
    }

    return ans;
}

int main()
{
    vector<int> spells = {5, 1, 3};
    vector<int> potions = {1, 2, 3, 4, 5};
    long long success = 7;

    vector<int> ans = successfulPairs(spells, potions, success);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}