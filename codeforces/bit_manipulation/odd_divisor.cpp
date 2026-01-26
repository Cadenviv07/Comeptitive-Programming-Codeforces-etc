
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        long long num;
        
        cin >> num;
        if (__builtin_popcountll(num) == 1){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}

