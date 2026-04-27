#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("evolution.in", "r", stdin);
    freopen("evolution.out", "w", stdout);

    int n;
    cin >> n;
    vector<vector<string>> cows(n);
    vector<string> unique;
    set<string> v;
    
    for(int i = 0; i < n; ++i){
        int k;
        cin >> k;
        vector<string> temp(k);
        for(int j = 0; j < k; ++j){
            string a;
            cin >> a;
            if(!v.count(a)){
                v.insert(a);
                unique.push_back(a);
            }
            temp[j] = a;
        }
        cows[i] = temp;
    }
    
    // Changed .length() to .size()
    for(int i = 0; i < unique.size(); ++i){ 
        // Fixed the j condition typo
        for(int j = i + 1; j < unique.size(); ++j){ 
            string a = unique[i]; // Fixed typo here
            string b = unique[j];

            bool global_only_a = false;
            bool global_only_b = false;
            bool global_both = false;
            
            // Changed .length() to .size()
            for(int k = 0; k < cows.size(); k++){
                // Track what THIS specific cow has
                bool cow_has_a = false;
                bool cow_has_b = false;
                
                vector<string> temp = cows[k]; // Declared type
                for(int f = 0; f < temp.size(); f++){
                    string s = temp[f]; // Declared type
                    if(s == a) cow_has_a = true;
                    if(s == b) cow_has_b = true;
                }
                
                // Now update the global flags based purely on this single cow
                if (cow_has_a && !cow_has_b) global_only_a = true;
                if (!cow_has_a && cow_has_b) global_only_b = true;
                if (cow_has_a && cow_has_b) global_both = true;
            }
            
            if(global_only_a && global_only_b && global_both){
                cout << "no" << "\n";
                return 0;
            }
        }
    }
    cout << "yes" << "\n";
    return 0;
}
