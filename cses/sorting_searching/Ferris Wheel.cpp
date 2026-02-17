#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,w;
    cin >> n >> w;
    vector<int> child(n);
    for(int i = 0; i < n; ++i){
        cin >> child[i];
    }
    sort(child.begin(), child.end());
    int left = 0;
    int right = n - 1;
    int count = 0;
    while(left <=right){
        if ((child[left] + child[right]) <= w){
            left++;
            right--;
            count++;
        }else{
            right--;
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
