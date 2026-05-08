#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int sum = 0;
    int mn = 102;
    for(int i = 0; i < n; ++i){
        int curr;
        cin >> curr;
        sum += curr;
        if(curr%10 != 0){
            mn = min(mn, curr);
        }
    }
    if(sum%10 == 0 && mn != 102){
        sum -= mn;
        cout << sum;
    }else if (sum%10 == 0){
        cout << 0;
    }else{
        cout << sum;
    }
    return 0;
}


