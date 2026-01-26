
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long left = 0;
    long right = 0;
    string s = "";
    cin >> s;
    long length = 0;
    while(right <= s.length() - 1){
        if( s[left] != s[right]){
            left = right;
        }
        length = max(length, right - left + 1);
        right = right + 1;
    }
    cout << length;
    return 0;
}

