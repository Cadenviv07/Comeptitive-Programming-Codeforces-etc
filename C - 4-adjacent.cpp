#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long factors = -1;
    long long multiples = 0;
    long long n;
    cin >> n;
    for(long long i = 0; i < n; ++i){
        long long curr;
        cin >> curr;
        if(curr%4 == 0){
            multiples++;
        }else if(curr%2 == 0 && curr != 1){
            factors++;
        }
    }
    if (factors == -1){
        factors = 0;
    }
    n -= factors;
    if(multiples >= n/2){
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}

