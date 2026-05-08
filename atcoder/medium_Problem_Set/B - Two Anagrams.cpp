#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s,t;
    cin >> s >> t;
    vector<int> sVal;
    vector<int> tVal;
    for(int i = 0; i < s.length(); ++i){
        sVal.push_back(static_cast<int>(s[i]));
    }
    for(int i = 0; i < t.length(); ++i){
        tVal.push_back(static_cast<int>(t[i]));
    }
    sort(sVal.begin(), sVal.end());
    sort(tVal.begin(), tVal.end());
    
    int left = 0;
    int right = t.length() - 1;
    while(left < s.length() && right >= 0){
        if(tVal[right] > sVal[left]){
            cout << "Yes";
            return 0;
        }else if(sVal[left] > tVal[right]){
            cout << "No";
            return 0;
        }
        right--;
        left++;
    }

    if(t.length() > s.length()){
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}
