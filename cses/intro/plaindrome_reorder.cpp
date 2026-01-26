
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    unordered_map<char,long> freq = {};
    string half = "";
    string middle = "";
    int odd = 0;
    for (long i = 0; i < s.length(); i++){
        if (freq.count(s[i])){
            freq[s[i]]++;
        }else{
            freq.insert({s[i], 1});
        }
    }

    for (const auto& [key,value]: freq){
        if (value%2 != 0){
            odd++;
            if ( odd > 1){
               cout << "NO SOLUTION";
               return 0;
            }else{
                half.append((value - 1) / 2, key);
                middle = key;
            }

        }else{
            half.append(value/2,key);
        }
    }
    string first = half;
    reverse(half.begin(), half.end());
    string second = half;
    cout << first << middle << second;
    return 0;
}

