#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s,t;
    cin >> s >> t;
    int left = 0;
    int right = 0;
    int overlap = 0;
    while(left < s.length()){
        if(s[left] == t[right]){
            overlap++;
            left++;
            right++;
        }else{
            left++;
        }
    }
    cout << (n*2) - overlap;

    return 0;
}
