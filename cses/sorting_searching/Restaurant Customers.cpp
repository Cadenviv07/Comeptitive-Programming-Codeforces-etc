#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    map<int, int> people;

    for(int i = 0; i < n; i++){
        int arrival, leaving;
        cin >> arrival >> leaving;
        
        people[arrival]++; 
        people[leaving]--;
    }

    int counter = 0;
    int mx = 0;

    for(auto const& [time, change] : people) {
        counter += change;
        mx = max(mx, counter);
    }

    cout << mx << endl; 
    return 0;
}
