#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("evolution.in", "r", stdin);
    freopen("evolution.out", "w", stdout);

    int n;
    cin >> n;
    map<string, string> prereq;
    for(int i = 0; i < n; ++i){
        int k;
        cin >> k;
        string prev = "";
        for(int j = 0; j < k; ++j){
            string s;
            cin >> s;
            if(prereq.count(s)){
                if(prereq[s] != prev){
                    cout << "no" << "\n";
                }
            }else{
                prereq[s] = prev;
            }
            prev = s;
        }
    }
    cout << "yes" << "\n";
    return 0;
}
