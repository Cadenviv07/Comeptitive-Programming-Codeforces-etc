#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.length();
    
    long long total = 0;
    char curr = s[0];
    int length = 1;
    vector<int> lengths;
    for(int i = 1; i < n; i++){
        if (s[i] == curr){
            length++;
        }else{
            curr = s[i];
            lengths.push_back(length);
            total += ((length)*(length-1))/2;
            length = 0;
        }
    }
    curr = s[0];
    int pointer = 0;
    for(int i = 1; i < n; i++){
        if(s[i] != curr){
            if(s[i] == '>' && s[i-1] == '<'){
                total += max(lengths[pointer], lengths[pointer + 1]);
            }
            pointer++;
        }
    }
    cout << total;
    return 0;
}
