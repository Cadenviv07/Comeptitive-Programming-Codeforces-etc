
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int count5 = 0;
    while (n > 0){
        n /= 5;
        count5 += n;
    }
    cout << count5;
    return 0;
}

