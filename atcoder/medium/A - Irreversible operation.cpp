#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    string d = s;
    reverse(d.begin(), d.end());
    int count = 0;
    for (int i = 0; i < s.length(); ++i){
        if(s[i] != d[i]){
            count++;
        }
    }
    cout << count;
    return 0;
}
