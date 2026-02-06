
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        map<int,int> occ;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            occ[x]++;
        }

        if (occ.size() >= 3){
            cout << "NO";
        }else{
            if( abs(occ.begin()->second - occ.rbegin()->second) <= 1){
                cout << "YES";
            }else{
                cout << "NO";
            }
        }
        cout << "\n";
    }
                 
    return 0;
}

