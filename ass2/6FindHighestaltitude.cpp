#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestAltitude(vector<int>& gain) {
    int altitude = 0;
    int maxAltitude = 0;

    for (int g : gain) {
        altitude += g;
        maxAltitude = max(maxAltitude, altitude);
    }

    return maxAltitude;
}

int main() {
    int n;
    cin >> n;

    vector<int> gain(n);

    for (int i = 0; i < n; i++) {
        cin >> gain[i];
    }

    cout << largestAltitude(gain) << endl;

    return 0;
}