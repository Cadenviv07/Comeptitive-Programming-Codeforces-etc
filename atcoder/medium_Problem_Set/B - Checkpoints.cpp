#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<pair<int, int>> people;
    vector<pair<int,int>> checkpoints;
    for(int i = 0; i < n; ++i){
        int x,y;
        cin >> x >> y;
        people.emplace_back(x,y);
    }
    for(int i = 0; i < m; ++i){
        int x,y;
        cin >> x >> y;
        checkpoints.emplace_back(x,y);
    }
    map<int,int> close;
    for(int i = 0; i < n; ++i){
        auto coordinates = people[i];
        auto temp = checkpoints[0];
        long long d = abs(temp.first - coordinates.first) + abs(temp.second - coordinates.second);
        close[i] = 0;
        for(int j = 1; j < m; ++j){
            auto checkpoint = checkpoints[j];
            if( (abs((coordinates.first - checkpoint.first)) + abs((coordinates.second - checkpoint.second))) < d){
                d = abs(coordinates.first - checkpoint.first) + abs(coordinates.second - checkpoint.second);
                close[i] = j;
            }
        }
    }
    for(const auto& [i,j]: close){
        cout << j + 1 << "\n";
    }
    return 0;
}
