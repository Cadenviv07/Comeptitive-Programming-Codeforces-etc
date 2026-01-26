
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long max = 0;
    long sum = 0;
    long number;
    cin >> max;
    while(cin >> number){
        sum += number;
    }
    cout << (max * (max + 1))/2 - sum;
    return 0;
}

