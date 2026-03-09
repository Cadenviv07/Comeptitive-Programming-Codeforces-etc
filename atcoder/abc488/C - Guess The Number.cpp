#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    vector<int> num(n, -1);
    for(int i = 0; i < m; ++i){
        int index,val;
        cin >> index >> val;
        if (num[index - 1] == -1){
            num[index - 1] = val;
        }else if(num[index - 1] != -1 && val != num[index-1]){
            cout << -1;
            return 0;
        }
    }
    if(num[0] == 0 && n > 1){
        cout << -1;
        return 0;
    }else if (num[0] == -1 && n > 1){
        num[0] = 1;
    }

    for(int i = 0; i < n; ++i){
        if(num[i] == -1){
            cout << 0;
        }else{
            cout << num[i];
        }
    }
    return 0;
}


