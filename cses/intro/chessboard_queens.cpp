
#include <bits/stdc++.h>
using namespace std;

bool column[8];
bool diag1[15];
bool diag2[15];

int ways = 0;

vector<string> board(8);

void search(int y){
    if (y == 8){
        ways++;
        return;
    }

    for  (int x = 0; x < 8; x++){
        if (board[y][x] == '*') continue;

        if (column[x]) continue;

        if (diag1[x - y + 7]) continue;

        if (diag2[x + y]) continue;
        
        column[x] = true;

        diag1[x - y + 7] = true;

        diag2[x + y] = true;

        search(y + 1);

        column[x] = false;
        diag1[x - y + 7] = false;
        diag2[x + y] = false;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    for (int i = 0; i < 8; i++){
        cin >> board[i];
    }

    search(0);

    cout << ways << endl;

    return 0;
}

