#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n,m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;
        bool found = false;        
        for(int i = 0; i <= 5; i++){
            if(x.find(s) != string::npos){
                cout << i << endl;
                found = true;
                break;
            }
            x+=x;
        }
        if(!found){
            if(x.find(s) != string::npos){
                cout << 6 << endl;
            }else{
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
