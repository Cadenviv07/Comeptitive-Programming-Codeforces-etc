
#include <bits/stdc++.h>
using namespace std;

void hanoi (int n, int source, int spare, int dest){
    if (n == 0) return;
    
    hanoi(n - 1, source, dest, spare);

    cout << source << " " << dest << "\n";

    hanoi(n - 1, spare, source, dest);
}


int main() {
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;
   
   cout << (1 << n) - 1 << "\n";

   hanoi (n , 1 , 2, 3);

   return 0;

}
   
