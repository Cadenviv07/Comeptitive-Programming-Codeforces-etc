#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    map<char, int> freq;
    string n = "";
    int mx = 0;
    int l = s.length();
    for(int i = 0; i < l; ++i){
        freq[s[i]]++;
        mx = max(mx, freq[s[i]]);
    }
    for(int i = 0; i < l; ++i){
        if(freq[s[i]] != mx){
            n += s[i];
        }
    }
    cout << n;
        

    return 0;
}
