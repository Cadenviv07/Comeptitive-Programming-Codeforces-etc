#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.length();
    long long total = 0;
    vector<int> left(n+1,0);
    vector<int> right(n+1,0);
    for(int i = 0; i <= n - 1; i++){
        if(s[i] == '<'){
            left[i + 1] = left[i] + 1;
        }else{
            left[i+1] = 0;
        }
    }

    for (int i = n - 1; i >= 0; i--){
        if(s[i] == '>'){
            right[i] = right[i+1] + 1;
        }else{
            right[i] = 0;
        }
    }

    for(int i = 0; i <= n; i++){
        total += max(left[i], right[i]);
    }

    cout << total;
    return 0;
}
