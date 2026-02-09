#include <bits/stdc++.h>
using namespace std;

int digitSum(int n){
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n/=10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k; 
    cin >> n >> k;
    int result = 0;
    for(int i = 0; i <=n; ++i){
        int d = digitSum(i);
        if (d == k){
            result++;
        }
    }
    cout << result << endl;
        

    return 0;
}
