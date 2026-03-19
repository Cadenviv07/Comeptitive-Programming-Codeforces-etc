#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    stack<char> st;
    for(int i = 0; i < s.length(); ++i){
        char c = s[i];
        if(c == '0'){
            st.push(c);
        }else if(c == '1'){
            st.push(c);
        }else if(c == 'B' &&  st.size() > 0){
            st.pop();
        }
    }
    string f = "";
    int temp = st.size();
    for(int i = 1; i <= temp; ++i){
        char c = st.top();
        st.pop();
        f += c;
    }

    reverse(f.begin(), f.end());
    cout << f;


    return 0;
}
