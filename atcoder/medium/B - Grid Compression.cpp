#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int h,w;
    cin >> h >> w;
    vector<int> heightCount(w,0);
    vector<int> widthCount(h,0);
    vector<vector<char>> matrix(h, vector<char>(w));
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            char c;
            cin >> c;
            if(c == '#'){
                heightCount[j] += 1;
                widthCount[i] += 1;
            }
            matrix[i][j] = c;
        }
    }
    for(int i = 0; i < h; ++i){
        if(widthCount[i] != 0){
            for(int j = 0; j < w; ++j){
                if(heightCount[j] != 0){
                    cout << matrix[i][j];
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
