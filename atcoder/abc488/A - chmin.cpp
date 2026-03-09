#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin >> n >> x;
    for(int i = 0; i < n; ++i){
        int curr;
        cin >> curr;
        if(curr < x){
            cout << 1;
            x = curr;
        }else{
            cout << 0;
        }
        cout << "\n";
    }

    return 0;
}
