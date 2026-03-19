#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int p,q,x,y;
    cin >> p >> q >> x >> y;
    if(x - p < 100 && x-p >= 0 && y-q < 100 && y-q >= 0){
        cout << "Yes";
    }else{
        cout << "No";
    } 

    return 0;
}
