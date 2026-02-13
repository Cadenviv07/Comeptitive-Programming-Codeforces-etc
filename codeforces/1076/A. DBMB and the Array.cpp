#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n,s,x;
        cin >> n >> s >> x;
        int sum = 0;
        
        for(int k = 0; k < n; k++){
            int m;
            cin >> m;
            sum += m;
        }
        if ((s-sum)%x == 0 && s >= sum){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
