#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 };

bool isValid(int x, int y) {
        return (x >= 0 && x < 8 && y >= 0 && y < 8);
}

int bfs(string start, string target) {
        int startX = start[0] - 'a';
            int startY = start[1] - '1';
                int targetX = target[0] - 'a';
                    int targetY = target[1] - '1';

                        if (startX == targetX && startY == targetY) return 0;

                            queue<pair<int, int>> q;
                                q.push({startX, startY});

                                    // FIX: Initialize with -1 so we can tell the difference between 
                                    // "Start Node (0)" and "Unvisited Node (-1)"
                                    vector<vector<int>> dist(8, vector<int>(8, -1));
                                        
                                        // Set start distance to 0
                                        dist[startX][startY] = 0;

                                            while (!q.empty()) {
                                                        pair<int, int> curr = q.front();
                                                                q.pop();

                                                                        int x = curr.first;
                                                                                int y = curr.second;

                                                                                        for (int i = 0; i < 8; i++) {
                                                                                                        int nx = x + dx[i];
                                                                                                                    int ny = y + dy[i];

                                                                                                                                // FIX: Check if dist is -1 (Unvisited)
                                                                                                                                if (isValid(nx, ny) && dist[nx][ny] == -1) {
                                                                                                                                                    dist[nx][ny] = dist[x][y] + 1;

                                                                                                                                                                    if (nx == targetX && ny == targetY) {
                                                                                                                                                                                            return dist[nx][ny];
                                                                                                                                                                                                            }

                                                                                                                                                                                    q.push({nx, ny});
                                                                                                                                                                                                }
                                                                                                                                        }
                                                                                            }
                                                return -1;
}

int main() {
        int t;
            if (cin >> t) {
                        while (t--) {
                                        string s1, s2;
                                                    cin >> s1 >> s2;
                                                                cout << bfs(s1, s2) << endl;
                                                                        }
                            }
                return 0;
}
