
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long moves = 0;
    long prev = 0;
    long number;
    int n;
    cin >> n;
    while(cin >> number){
        if (number < prev){
            int diff = prev - number;
            moves = moves + (diff);
            prev = number + diff;
        }else{
            prev = number;
        }
    }
    cout << moves;
    return 0;
}

