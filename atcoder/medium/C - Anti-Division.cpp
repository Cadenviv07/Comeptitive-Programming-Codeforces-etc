#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    long long large = b/d - (a-1)/d;
    long long small = b/c - (a-1)/c;
    long long remainder = lcm(c,d); 
    long long total = 0;
    total += b/remainder - (a-1)/remainder;
    total += (b-a) - (large + small) + 1;
    cout << total;
    return 0;
}
//How many times does six times something equal eight times something in this range
// 4 8 12 16 20 24 28 32 36 
// 6 12 18 24 30 36 
// 4x3 
// 6x2
// 6x4 = 8x3
// If even largets two
