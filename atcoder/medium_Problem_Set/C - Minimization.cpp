#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    float n, k;
    cin >> n >> k;
    int sum = ceil((n-1)/(k-1));
    cout << sum;
    return 0;
}
