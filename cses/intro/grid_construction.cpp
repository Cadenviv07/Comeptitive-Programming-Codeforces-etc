
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int r = 0; r < n; r++){
        for (int c = 0; c < n; c++){
            int mex_val = r ^ c;
            cout << mex_val << " ";
        }
        cout << endl;
    }
    return 0;
}

