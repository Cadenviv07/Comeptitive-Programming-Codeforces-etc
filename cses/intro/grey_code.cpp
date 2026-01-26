
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    
    vector<string> grey_code;
    grey_code.push_back("0");
    grey_code.push_back("1");

    for (int i = 2; i <= n; i++){
        for(int j = grey_code.size() - 1; j >= 0; j--){
            grey_code.push_back(grey_code[j]);
        }

        for ( int k = 0; k <= grey_code.size()/2 - 1; k++){
            grey_code[k] = "0" + grey_code[k];
        }

        for (int k = grey_code.size()/2; k < grey_code.size(); k++){
            grey_code[k] = "1" + grey_code[k];
        }

    }

    for (string s : grey_code){
        cout << s << "\n";
    }

    return 0;
}



