#include <bits/stdc++.h>
using namespace std;

// Added & to pass the graph by reference (saves memory and time)
int dfs(int start, const vector<vector<int>>& graph){
    // If there are no outgoing belts, we found the sink! Return this node.
    if(graph[start].size() == 0){
        return start;
    }
    // Otherwise, keep walking down the belt and return the result.
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
        int a, b;
        cin >> a >> b;
        appear.insert(b - 1);
        graph[a - 1].push_back(b - 1);
    }
    
    int count = 0;
    
    // Find the destination of the very first source node we encounter
    for(int i = 0; i < n; ++i){
        if(!appear.count(i)){
            count = dfs(i, graph); // Changed from += to just =
            break;
        }
    }
    
    // Check all source nodes to ensure they arrive at the exact same destination
    for(int i = 0; i < n; ++i){
        if(!appear.count(i)){
            int temp = dfs(i, graph);
            if(temp != count){
                cout << -1 << "\n";
                return 0;
            }
        }
    }
    
    // Add 1 back to convert from 0-indexed to 1-indexed for the grader
    cout << count + 1 << "\n";
    return 0;
}
