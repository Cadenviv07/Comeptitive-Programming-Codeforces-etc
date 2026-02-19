#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<int> ans(n + 1); // This is our "Cheat Sheet"

    for (int i = n; i >= 1; i--) { // Start from the end of the line
        if (a[i] == i) {
            // Person i keeps the ball
            ans[i] = i; 
        } else {
            // Person i passes to a[i]. 
            // We just look up a[i]'s final destination in our cheat sheet.
            ans[i] = ans[a[i]]; 
        }
    }

    for (int i = 1; i <= n; i++) cout << ans[i] << " ";
}
