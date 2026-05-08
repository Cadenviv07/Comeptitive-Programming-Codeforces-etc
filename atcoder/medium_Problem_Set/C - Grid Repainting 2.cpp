#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    bool paint = true;

    int h,w;
    cin >> h >> w;
    vector<vector<char>> matrix (h, vector<char>(w));
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            char c;
            cin >> c;
            matrix[i][j] = c;
        }
    }
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            bool test = false;
            if(j > 0 && matrix[i][j] == '#' && matrix[i][j-1] == '#'){
                test = true;
            }else if(j < w - 1 && matrix[i][j] == '#' && matrix[i][j + 1] == '#'){
                test = true;
            }else if (i > 0 && matrix[i][j] == '#' && matrix[i-1][j] == '#'){
                test = true;
            }else if ( i < h - 1 && matrix[i][j] == '#' && matrix[i+1][j] == '#'){
                test = true;
            }
            if(!test && matrix[i][j] == '#'){
                paint = false;
            }
        }
    }
    if(paint){
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}
