#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,l,r;
    cin >> n >> l >> r;
    string s;
    cin >> s;
    
    vector<int> freq(26,0);
    int positioning = static_cast<int>('a');
    for(int i = l; i <= r; ++i){
        freq[(int)s[i]-positioning]++;
    }
    long long total = freq[(int)s[0]-positioning];
    for(int i = 1; i <= n - l; ++i){
        int upper = i + r;
        if(upper < n){
            freq[(int)s[i+r]-positioning]++;
        }
        freq[(int)s[i-1+l] - positioning]--;
        total += freq[(int)s[i]-positioning];
    }

    cout << total;

    return 0;
}

