#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, k;
        cin >> n >> k;
        bool b = false;
        for(int j = 0; j < n; j++){
            int c;
            cin >> c;
            if(c == k){
                b = true;
            }
        }

        if(b){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
            

    return 0;
}
