#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int count = 0;
        int n;
        cin >> n;
        for(int j = 0; j < n; j++){
            int curr;
            cin >> curr;
            if(67%curr == 0){
                count++;
            }
        }
        if (count == 2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        } 
    }

    return 0;
}
