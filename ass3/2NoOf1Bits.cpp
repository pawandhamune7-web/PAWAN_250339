#include <iostream>
using namespace std;

int hammingWeight(int n) {
    return __builtin_popcount(n);
}

int main() {
    int n;
    cin >> n;

    cout << hammingWeight(n);

    return 0;
}