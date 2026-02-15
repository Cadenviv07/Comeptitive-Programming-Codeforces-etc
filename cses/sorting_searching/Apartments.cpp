#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> people;
    for(int i = 0; i < n; i++){
        int curr;
        cin >> curr;
        people.push_back(curr);
    }
    vector <int> apartments;
    for(int k = 0; k < m; k++){
        int curr;
        cin >> curr;
        apartments.push_back(curr);
    }
    sort(people.begin(), people.end());
    sort(apartments.begin(), apartments.end());

    int p = 0;
    int a = 0;
    int count = 0;
    while ( p < n && a < m){
        if (apartments[a] >= people[p] - k && apartments[a] <= people[p] + k){
            count++;
            p++;
            a++;
        }else if (apartments[a] < people[p] - k){
            a++;
        }else{
            p++;
        }
    }

    cout << count;

    return 0;
}
