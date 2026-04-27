#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("family.in", "r", stdin);
    freopen("family.out", "w", stdout);

    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    
    map<string, string> mothers;
    for(int i = 0; i < n; ++i){
        string t, c;
        cin >> t >> c;
        mothers[c] = t;
    }
    
    // Fix 1: Ensure the root ancestor gets pushed to the vectors
    vector<string> ac;
    string child = a;
    ac.push_back(child);
    while(mothers.count(child)){
        child = mothers[child];
        ac.push_back(child);
    }
    
    vector<string> bc;
    child = b;
    bc.push_back(child);
    while(mothers.count(child)){
        child = mothers[child];
        bc.push_back(child);
    }
 
    // Fix 2: Declare types and break both loops
    int dx = -1;
    int dy = -1;
    for(int i = 0; i < ac.size(); ++i){
        for(int j = 0; j < bc.size(); ++j){
            if(ac[i] == bc[j]){
                dx = i;
                dy = j;
                break; // Breaks inner loop
            }
        }
        if (dx != -1) break; // Breaks outer loop
    }

    // Fix 3: Proper boolean check
    if(dx == -1 || dy == -1){
        cout << "NOT RELATED\n";
    }
    else if (dx == 1 && dy == 1){
        cout << "SIBLINGS\n";
    }
    else if (dx > 1 && dy > 1){
        cout << "COUSINS\n";
    }
    else {
        // We know one of them is an ancestor or aunt.
        // Let's figure out who is higher up the tree.
        int ancestor_dist = max(dx, dy);
        string higher_cow = (dx > dy) ? b : a;
        string lower_cow = (dx > dy) ? a : b;
        
        bool is_direct_ancestor = (min(dx, dy) == 0);
        
        if (is_direct_ancestor) {
            cout << higher_cow << " is the ";
            for (int i = 0; i < ancestor_dist - 2; ++i) cout << "great-";
            if (ancestor_dist >= 2) cout << "grand-";
            cout << "mother of " << lower_cow << "\n";
        } 
        else {
            // It's an aunt relationship (min distance is 1)
            cout << higher_cow << " is the ";
            for (int i = 0; i < ancestor_dist - 2; ++i) cout << "great-";
            cout << "aunt of " << lower_cow << "\n";
        }
    }

    return 0;
}
