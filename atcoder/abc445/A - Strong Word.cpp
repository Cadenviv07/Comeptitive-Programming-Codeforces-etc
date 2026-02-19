#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    char b = s[0];
    reverse(s.begin(), s.end());
    if(b == s[0]){
        cout <<"Yes";
    }else{
        cout << "No";
    }

    return 0;
}
