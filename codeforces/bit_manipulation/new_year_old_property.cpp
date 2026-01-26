
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long a,b;
    cin >> a >> b;

    int count = 0;
    
    for (int l = 2; l <= 60; l++){

        for (int i = 0; i <= l - 2; i++){
            unsigned long long ones = (1ULL << l) - 1;

            unsigned long long year = ones - (1ull << i);

            if ( year >= a and year <= b){

                    count += 1;
                    
            }
        }
    }
    cout << count;
    return 0;
}

