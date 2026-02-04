
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, x;
        cin >> n >> x;
        int m = 0;
        int curr = 0;
        for(int i = 0; i < n; i ++){
            int c;
            cin >> c;
            m = max(m, c - curr);
            curr = c;
        }
        m = max(m, 2 *(x - curr)); 
        cout << m << "\n";
    }

    return 0;
}

