#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    bool journey = true;
    int n;
    cin >> n;
    long long current = 0;
    long long tP = 0;
    for(int i = 0; i < n; i++){
        long long t,x,y;
        cin >> t >> x >> y;
        current = abs(x + y - current);
        long long tD = abs(t-tP);
        if((tD-current)%2 != 0 || current > tD){
            journey = false;
        }
        current = x + y;
        tP = t;
    }
    if(journey){
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}

