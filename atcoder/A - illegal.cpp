#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int l = s.length();
    if(l%5== 0){
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}
