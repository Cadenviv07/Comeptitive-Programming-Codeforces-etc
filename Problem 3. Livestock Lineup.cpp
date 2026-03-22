#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    #include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

// 1. Global State Variables
// Keeping these global makes them accessible to the DFS function without passing them as arguments.
const vector<string> COWS = {
    "Beatrice", "Belinda", "Bella", "Bessie", 
    "Betsy", "Blue", "Buttercup", "Sue"
};
map<string, int> cow_inds;
vector<int> neighbors[8]; // Adjacency list for the graph
bool visited[8] = {false};
vector<int> final_order;

// 2. The DFS Function
// This recursively visits the current cow, marks it, and moves to the next unvisited neighbor.
void dfs(int current_cow) {
    visited[current_cow] = true;
    final_order.push_back(current_cow);
    
    // Look at whoever this cow is standing next to
    for (int next_cow : neighbors[current_cow]) {
        if (!visited[next_cow]) {
            dfs(next_cow); // Recursively visit the next cow down the line
        }
    }
}

int main() {
    // Map names to their alphabetical indices (0 to 7)
    for (int i = 0; i < 8; i++) {
        cow_inds[COWS[i]] = i;
    }

    // Read USACO input
    ifstream read("lineup.in");
    int req_num;
    read >> req_num;

    // Build the graph
    for (int r = 0; r < req_num; r++) {
        string cow1, cow2, trash;
        // Read the two names, throwing away the words in between
        read >> cow1 >> trash >> trash >> trash >> trash >> cow2;
        
        int c1 = cow_inds[cow1];
        int c2 = cow_inds[cow2];
        
        // Add undirected edges
        neighbors[c1].push_back(c2);
        neighbors[c2].push_back(c1);
    }

    // 3. Trigger the Traversal
    // Loop through 0 to 7 (Alphabetical order is guaranteed)
    for (int i = 0; i < 8; i++) {
        // Start a DFS ONLY if the cow hasn't been visited AND is at the end of a chain (or isolated)
        if (!visited[i] && neighbors[i].size() <= 1) {
            dfs(i);
        }
    }

    // Write USACO output
    ofstream out("lineup.out");
    for (int cow_id : final_order) {
        out << COWS[cow_id] << "\n";
    }

    return 0;
}
