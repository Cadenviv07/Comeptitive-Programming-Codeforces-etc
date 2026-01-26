
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    long long sum = n * (n+1)/2;

    long long target = sum/2;
    vector<int> set1, set2;
    if (sum%2 != 0){
        cout << "NO";
        return 0;
    }

    for (int i = n; i >=1; i--){
        if ( i <= target){
            set1.push_back(i);
            target -= i;
        }else{
            set2.push_back(i);
        }
    }
    cout << "YES" << "\n";
    cout << set1.size()<<"\n";
    for (int x : set1) cout <<x << " ";
    cout << "\n";
    cout << set2.size()<<"\n";
    for (int x: set2) cout << x << " ";

    return 0;
}
