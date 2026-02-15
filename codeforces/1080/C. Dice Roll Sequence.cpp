#include <iostream>
#include <vector>

using namespace std;


int get_family(int val) {
    if (val == 1 || val == 6) return 1;
    if (val == 2 || val == 5) return 2;
    return 3; // Faces 3 and 4
}

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int total_ops = 0;
    int current_k = 0;
    int current_fam = -1;

    for (int i = 0; i < n; i++) {
        int fam = get_family(a[i]);
        
        if (fam == current_fam) {
            current_k++;
        } else {
            total_ops += current_k / 2;
            
            current_fam = fam;
            current_k = 1;
        }
    }
    
    total_ops += current_k / 2;

    cout << total_ops << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}
