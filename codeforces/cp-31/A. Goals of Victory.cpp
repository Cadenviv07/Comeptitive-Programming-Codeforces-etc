#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){

        int n;
        cin >> n;
        int sumN = 0;
        int sumP = 0;

        for(int j = 0; j < n - 1; j++){
            int c;
            cin >> c;
            if ( c < 0){
                sumN += c;
            }else{
                sumP += c;
            }
        }

       cout << -1*(sumP + sumN) << endl;
    }

    

    return 0;
}
