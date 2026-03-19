#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, w;

    string t, a;
    
    cin >> n >> m >> t >> a >> w;

    set<char> takashi;
    set<char> aoki;
    for(int i = 0; i < n; ++i){
        char c = t[i];
        takashi.insert(c);
    }

    for(int i = 0; i < m; ++i){
        char c = a[i];
        aoki.insert(c);
    }

    bool tak = true;
    bool aok = true;
    for(int i = 0; i < w; ++i){
        string s;
        cin >> s;
        for(int j = 0; j < s.length(); ++j){
            char c = s[j];
            if(!takashi.count(c)){
                tak = false;
            }
            if (!aoki.count(c)){
                aok = false;
            }
        }
        if(tak == true && aok == false){
            cout << "Takahashi" << "\n";
        }else if(aok == true && tak == false){
            cout << "Aoki" << "\n";
        }else{
            cout << "Unknown" << "\n";
        }
        tak = true;
        aok = true;
    }
    return 0;
}

