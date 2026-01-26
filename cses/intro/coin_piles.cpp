
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin >> a >> b;
        bool condition1 = ((a + b) % 3 == 0);

        bool condition2 = (max(a,b) <= 2 * min(a,b));

        if (condition1 and condition2) {
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}

