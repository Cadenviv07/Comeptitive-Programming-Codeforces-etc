#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;
    
    int mx = 0;
    vector<string> words(n);
    for(int i = 0; i < n; ++i){
        cin >> words[i];
        mx = max(mx, (int)words[i].length());
    }

    for (int i = 0; i < n; ++i){
        int padding_count = (mx - words[i].length()) / 2;
        string dots(padding_count, '.');
        
        cout << dots << words[i] << dots << "\n"; 
    }

    return 0;
}
