#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> list(n);
    for(int i = 0; i < n; ++i){
        cin >> list[i];
    }
    int point = 1;
    for(int i = 1; i <= n; ++i){
        point = list[point - 1];
        if (point == 2){
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
