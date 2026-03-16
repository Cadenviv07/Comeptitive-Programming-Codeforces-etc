#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double d;
    cin >> d;
    
    double r = d/2;

    double area = r * r * M_PI;

    cout << fixed << setprecision(12) << area;

    return 0;
}
