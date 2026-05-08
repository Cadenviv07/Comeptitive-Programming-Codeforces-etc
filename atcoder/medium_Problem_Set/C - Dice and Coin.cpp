#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double n,k;
    cin >> n >> k;
    double prob = 0;
    double coin = 0.5;
    for(int i = 1; i <= n; ++i){
        unsigned int temp = ceil(((k-i)/i));
        int power = (temp == 0) ? 0 : floor((log2(temp))) + 1;
        double dice = 1/n;
        double coinOp = pow(coin,power);
        prob += (dice)*(coinOp);
    }
    cout << setprecision(12) << prob;
    return 0;
}




