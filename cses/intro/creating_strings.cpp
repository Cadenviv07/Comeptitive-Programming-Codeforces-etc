
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    
    sort(s.begin(), s.end());

    vector<string> perms;

    do{
        perms.push_back(s);
    }while(next_permutation(s.begin(), s.end()));

    cout << perms.size() << endl;
    for (string p : perms){
        cout << p << endl;
    }

    return 0;
}

