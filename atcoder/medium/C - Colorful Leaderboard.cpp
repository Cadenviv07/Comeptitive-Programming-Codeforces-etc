#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<long long> buckets;
    int freeCount = 0;

    for (int i = 0; i < n; ++i) {
        long long rating;
        cin >> rating;

        if (rating >= 3200) {
            freeCount++;
        } else {
            buckets.insert(rating / 400);
        }
    }

    int minColors = buckets.size();
    int maxColors = minColors + freeCount;

    if (minColors == 0 && freeCount > 0) {
        minColors = 1;
    }

    cout << minColors << " " << maxColors << "\n";

    return 0;
}
