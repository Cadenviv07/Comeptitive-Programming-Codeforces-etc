
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long k;
    cin >> k;
    for (long i = 1; i <= k; i++){
       long nominator = i * i * ((i * i) - 1);
       long subtraction = 4 * (i - 1) * (i - 2);
       long total = nominator/2 - subtraction;
       cout << total << "\n";
    }
    return 0;
}

