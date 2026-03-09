#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    string k = "keyence";
    int pointer = 0;
    string f = "";
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == k[i]){
            f += s[i];
        }else{
            pointer = i;
            break;
        }
    }
    if(f == k){
        cout << "YES";
        return 0;
    }
    for(int i = s.length() - k.length() + pointer; i < s.length(); i++){
        if(s[i] == k[pointer]){
            pointer++;
            f += s[i];
        }else{
            break;
        }
    }
    if(f == k){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}


