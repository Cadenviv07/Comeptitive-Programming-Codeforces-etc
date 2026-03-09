#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin >> n >> q;
    map<int, int> s;
    vector<int> b(n);
    for(int i = 0; i < n; ++i){
        int curr;
        cin >> curr;
        s[i] = curr;
        b[i] = curr;
    }
    sort(b.begin(), b.end());
    for(int i = 0; i < q; ++i){
        int k;
        cin >> k;
        vector<int> m(k);
        for(int j = 0; j < k; ++j){
            int curr;
            cin >> curr;
            m[j] = curr - 1;
        }
        bool game = false;
        int pointer = 0;
        int counter = 0;
        while(counter < k){
            game = true;
            for(int l = 0; l < k; l++){
                int index = m[l];
                if(s[index] == b[pointer]){
                    pointer++;
                    game = false;
                }
            }
            counter++;
        }
        cout << b[pointer] << "\n";
    }
    return 0;
}





