#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, a, b;
    cin >> n >> a >> b;
    if(a > b || n == 1 && a != b){
        cout << 0;
        return 0;
    }

    long long total = (b-a)*(n-2) + 1;
    cout << total;
}

