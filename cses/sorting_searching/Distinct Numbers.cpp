#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    set<int> hash;
    for(int i = 0; i < n; i++){
        int curr;
        cin >> curr;
        hash.insert(curr);
    }
    cout << hash.size() << endl; 
    return 0;
}
