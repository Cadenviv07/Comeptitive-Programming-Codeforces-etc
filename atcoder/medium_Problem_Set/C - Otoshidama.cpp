#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,y;
    cin >> n >> y;
    int big = 0;
    int small = 0;
    int medium = 0;

    while(y >= 10000){
        y -= 10000;
        big ++;
    }
    
    while(y >= 5000){
        y -= 5000;
        medium ++;
    }

    while(y >= 1000){
        y -= 1000;
        small ++;
    }

    int total = n - (medium + small + big);
    if(total == 0){
        cout << big << " " << medium << " " << small;
    }else{
        while(total >= 9 && big > 0){
            big--;
            total -= 9;
            small += 10;
        }

        while(total >= 4 && medium > 0){
            total -= 4;
            medium--;
            small += 5;
        }

        while(total >= 1 != 0 && big > 0){
            total -= 1;
            big--;
            medium += 2;
        }

        if(total != 0 || big + medium + small > n){
            cout << -1 << " " << -1 << " " << -1;
        }else{
            cout << big << " " << medium << " " << small;
        }
    }
    return 0;
}
