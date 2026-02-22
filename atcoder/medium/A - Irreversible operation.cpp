#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    long long n = s.length();
    long long count = 0;
    long long total = 0;
    for (int i = n - 1; i >= 0; --i){
            if(s[i] == 'B'){
                total += (n-i-1) - count;
                count++;
            }
    }
    cout << total;
    return 0;
}

