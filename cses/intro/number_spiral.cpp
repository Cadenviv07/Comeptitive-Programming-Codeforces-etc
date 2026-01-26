
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    long targetx = 0;
    long targety = 0;
    long target = 0;
    for (int i = 0; i < t; i++){
        cin >> targety >> targetx;
        if (targetx >= targety){
            if ((targetx * targetx)%2 == 0){
                target = (targetx - 1) * (targetx - 1 ) + targety;
            }else{
                target = (targetx) * (targetx) - targety + 1;
            }
        }else{
            if((targety * targety)%2 == 0){
                target = (targety) * (targety) - targetx + 1;
            }else{
                target = (targety - 1) * (targety - 1) + targetx;
            }
        }
        cout << target << "\n";
        targetx = 0;
        targety = 0;
    }
    return 0;
}

