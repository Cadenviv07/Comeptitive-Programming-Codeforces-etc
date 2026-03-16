#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q, r, c;
    cin >> r >> c >> q;

    for(int i = 0; i < q; ++i){
        int t, n;
        cin >> t >> n;
        if(t == 1){
            if(n > r){
                cout << c * c << "\n";
                r = 0;
            }else{
                cout << c * n << "\n";
                r -= n;
            }
        }else if(t == 2){
            if(n > c){
                cout << r * r << "\n";
                c = 0;
            }else{
                cout << r * n << "\n";
                c -= n;
            }
        }
    }
    return 0;
}
