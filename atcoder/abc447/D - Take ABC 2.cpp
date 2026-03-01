#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    int l = s.length();
    int count = 0;
    int countA = 0;
    int countB = 0;
    for(int i = 0; i < l; ++i){
        if(s[i] == 'A'){
            countA++;
        }else if(s[i] == 'B' && countA > 0){
            countB++;
            countA--;
        }else if(s[i] == 'C' && countB > 0){
            countB--;
            count++;
        }
    }
    cout << count;

    return 0;
}
