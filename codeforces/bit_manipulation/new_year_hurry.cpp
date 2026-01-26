
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int k;
    cin >> k;
    int remaining = 4 * 60 - k;
    int i = 1;
    int total = 0;
    while ( total + (i * 5) <= remaining and i <= n){
        total += i * 5;
        i += 1;
    }
    cout << i - 1;

    return 0;
}

