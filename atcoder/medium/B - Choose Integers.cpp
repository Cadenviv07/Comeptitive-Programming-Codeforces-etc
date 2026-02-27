#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a , b , c;
    cin >> a >> b >> c;
    bool sol = false;
    for(int i = 1; i <= b; i ++){
        int temp = a * i;
        if(temp%b == c){
            sol = true;
        }
    }
    if(sol){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}


