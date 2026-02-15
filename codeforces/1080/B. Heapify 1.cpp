#include <iostream>
#include <vector>

using namespace std;

int get_home_track(int n) {
    if (n == 0) return 0;
    while (n % 2 == 0) {
        n /= 2;
    }
    return n;
}

void solve() {
    int n;
    cin >> n;
    
    bool possible = true;
    for (int i = 1; i <= n; ++i) {
        int a_i;
        cin >> a_i;
        
        if (possible) {
            if (get_home_track(i) != get_home_track(a_i)) {
                possible = false;
            }
        }
    }
    
    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
