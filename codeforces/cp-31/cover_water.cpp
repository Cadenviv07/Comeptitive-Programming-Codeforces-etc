
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
        string s;
        cin >> s;
        bool three = false;
        int count = 0;
        for (int i = 0; i < n; i++){

            if( i <= n - 3 && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.'){
                three = true;
            }

            if(s[i] == '.'){
                count++;
            }

        }   
        if(three){
            cout << 2 << "\n";
        }
        else{
            cout << count << "\n";
        }
    }

    return 0;
}

