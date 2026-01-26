
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;    
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    if (k >= 2){
        cout << "YES" << endl;
        return;
    }
    //Resubmit 
    bool sorted = true;
    for(int j = 0; j < n - 1; j++){
        if (a[j] > a[j+1]){
            sorted = false;
        }
    }

    if (sorted) cout << "YES" << endl;
    else cout << "NO" << endl;
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

