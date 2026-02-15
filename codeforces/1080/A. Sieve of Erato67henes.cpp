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
        int count1 = 0;
        int count2 = 0;
        for(int i = 0; i < n; i++){
            int curr;
            cin >> curr;
            if(curr == 1){
                count1++;
            }else if (curr == 67){
                count2++;
            }
        }
        if (count2 > 0){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    

    return 0;
}
