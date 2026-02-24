#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int h,w;
    cin >> h >> w;

    vector<vector<char>> array(h);
    for(int i = 0; i < h; i++){
        string s;
        cin >> s;
        vector<char> temp(w);
        for (int j = 0; j < w; j++){
            temp[j] = s[j];
        }
        array[i] = temp;
    }
    
    vector<vector<char>> bomb(h);
    for (int i = 0; i < h; i++){
        vector<char> temp(w);
        for (int j = 0; j < w; j++){
            int count = 0;
            if (array[i][j] == '#'){
                temp[j] = '#';
            }
            else{
                if (j > 0 && array[i][j-1] == '#'){
                    count++;
                }
                if ( j < w - 1 && array[i][j+1] == '#'){
                    count++;
                }

                if (i > 0 && array[i-1][j] == '#'){
                    count++;
                }

                if (i < h - 1 && array[i+1][j] == '#'){
                    count++;
                }

                if (j > 0 && i > 0 && array[i-1][j-1] == '#'){
                    count++;
                }

                if (j > 0 && i < h - 1 && array[i+1][j-1] == '#'){
                    count++;
                }

                if (j < w - 1 && i > 0 && array[i-1][j+1] == '#'){
                    count++;
                }

                if (j < w - 1 && i < h - 1 && array[i+1][j+1] == '#'){
                    count++;
                }
                temp[j] = static_cast<char>(count);
            }
        }
        bomb[i] = temp;
    }
    
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            int num = static_cast<int>(bomb[i][j]);
            if (num == 35){
                cout << '#';
            }else{
                cout << num;
            }
        }
        cout << endl;
    }
    
    return 0;
}
