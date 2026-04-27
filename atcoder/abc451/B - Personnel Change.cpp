#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    vector<int> ab(m);
    vector<int> bb(m);
    for(int i = 0; i < n; ++i){
        int a,b;
        cin >> a >> b;
        ab[a-1]++;
        bb[b-1]++;
    }
    for(int i = 0; i < m; ++i){
        cout << bb[i] - ab[i] << "\n";
    }   



    return 0;
}
