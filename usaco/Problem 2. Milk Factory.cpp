#include <bits/stdc++.h>
using namespace std;


int dfs(int start, vector<vector<int>> graph){
    if(graph[start].size() == 0){
        return start;
    }
    return dfs(graph[start][0], graph);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);

    int n;
    cin >> n;
    set<int> appear;
    vector<vector<int>> graph(n);
    for(int i = 0; i < n - 1; ++i){
        int a,b;
        cin >> a >> b;
        appear.insert(b-1);
        graph[a - 1].push_back(b - 1);
    }
    int count = 0;
    for(int i = 0; i < n; ++i){
        if(!appear.count(i)){
            count += dfs(i, graph);
            break;
        }
    }
    for(int i = 0; i < n; ++i){
        if(!appear.count(i)){
            int temp = dfs(i, graph);
            if(temp != count){
                cout << -1 << "\n";
                return 0;
            }
        }
    }
    cout << count + 1 << "\n";
    return 0;
}

