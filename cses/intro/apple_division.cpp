
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<long long> weights(n);
    long long totalSum = 0;

    for (int i = 0; i < n; i++){
        cin >> weights[i];
        totalSum += weights[i];
    }

    long long minDiff = totalSum;

    for (int i = 0; i < ( 1 << n); i++){
        long long currentSum = 0;

        for (int j = 0; j < n; j++){

            if ((i >> j) & 1) {
                currentSum += weights[j];
            }
        }
        long long currentDiff = abs(totalSum - 2 * currentSum);

        minDiff = min(minDiff, currentDiff);
    }
    cout << minDiff << endl;
    return 0;
}
