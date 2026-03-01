#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s,t;
    cin >> s >> t;

    long long l1 = s.length();
    long long l2 = t.length();
    long long opps = 0;
    long long top = 0;
    long long bottom = 0;
    while(bottom < l2){
        if(s[top] == t[bottom]){
            top++;
            bottom++;
        }else if (t[bottom] != 'A' && s[top] == 'A'){
            opps++;
            top++;
        }else if(t[bottom] == 'A' && s[top] != 'A'){
            opps++;
            bottom++;
        }else if(top >= l1 && t[bottom] == 'A'){
            opps++;
        }else if(t[bottom] != 'A' && s[top] != 'A' && t[bottom] != s[top]){
            cout << -1;
            return 0;
        }
    }
    while(top < l1){
        if(s[top] == 'A'){
            opps++;
        }else{
            cout << -1;
            return 0;
        }
        top++;
    }
    cout << opps;
    return 0;
}
