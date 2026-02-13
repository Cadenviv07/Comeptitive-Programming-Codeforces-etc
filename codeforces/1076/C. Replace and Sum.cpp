#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<long long> mx(n);
        for (int i = 0; i < n; i++)
            mx[i] = max(a[i], b[i]);

        vector<long long> suf(n);
        suf[n - 1] = mx[n - 1];
        for (int i = n - 2; i >= 0; i--)
            suf[i] = max(mx[i], suf[i + 1]);

        vector<long long> pref(n);
        pref[0] = suf[0];
        for (int i = 1; i < n; i++)
            pref[i] = pref[i - 1] + suf[i];

        while (q--) {
            int l, r;
            cin >> l >> r;
            l--; 
            r--;

            long long ans = pref[r];
            if (l > 0)
                ans -= pref[l - 1];

            cout << ans << " ";
        }

        cout << "\n";
    }

    return 0;
}

