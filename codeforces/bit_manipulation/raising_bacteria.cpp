
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >>x;
    int bacteria = __builtin_popcount(x);
    cout << bacteria;
    return 0;
}

