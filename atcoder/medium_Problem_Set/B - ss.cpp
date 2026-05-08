#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.length();
        
    for(int i = n - 3; i > 0; i -= 2){
        string s1 = s.substr(0, i/2 + 1);
        string s2 = s.substr(i/2 + 1, i-(i/2));
        if (s1 == s2){
            cout << i + 1;
            break;
        }
    }
    return 0;
}
