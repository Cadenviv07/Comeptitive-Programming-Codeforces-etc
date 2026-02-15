#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> sword(n);
        for (int i = 0; i < n; i++) {
            cin >> sword[i];
        }

        sort(sword.begin(), sword.end());

        vector<long long> prefix(n);
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            if (i == 0) prefix[i] = x;
            else prefix[i] = prefix[i-1] + x;
        }

        long long ans = 0;

        for (int m = 0; m < n; m++) {

            long long usable = n - m; 

            int lo = 0, hi = n - 1;
            int best = -1;

            while (lo <= hi) {
                int mid = (lo + hi) / 2;

                if (prefix[mid] <= usable) {
                    best = mid;
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }

            if (best != -1) {
                long long levels = best + 1;
                ans = max(ans, sword[m] * levels);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}

