#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 1) cnt1++;
        else if (x == 2) cnt2++;
        else if (x == 3) cnt3++;
        else cnt4++;
    }

    int taxi = 0;

    // Groups of 4
    taxi += cnt4;

    // Pair 3 with 1
    int matched = min(cnt3, cnt1);

    taxi += cnt3;
    cnt1 -= matched;

    // Pair 2 with 2
    taxi += cnt2 / 2;
    cnt2 %= 2;

    // One group of 2 left
    if (cnt2) {
        taxi++;

        if (cnt1 >= 2)
            cnt1 -= 2;
        else
            cnt1 = 0;
    }

    // Remaining groups of 1
    taxi += (cnt1 + 3) / 4;

    cout << taxi;

    return 0;
}