
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long num = n - 1;
    if ( n == 1){
        cout << 1; 
    }
    else if (n <= 3){
        cout << "NO SOLUTION";
    }else{
        for(int i = 1; i <= n; i++){
            if(num == 1 or num == 2){
                cout << num << " ";
                num = n;
            }else{
                cout << num << " ";
                num = num - 2;
            }
        }
    }

    return 0;
}

