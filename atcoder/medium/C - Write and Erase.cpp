#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    set<int> nums;
    for(int i = 0; i < n; ++i){
        int curr;
        cin >> curr;
        if(nums.count(curr)){
            nums.erase(curr);
        }else{
            nums.insert(curr);
        }
    }
    cout << nums.size();
    return 0;
}
