#include <iostream>
#include <vector>

using namespace std;

void solve() {
        int n, a, b;
            cin >> n >> a >> b; // Read N (Total cards), A (Alice wins), B (Bob wins)
                if (a + b > n) {
                            cout << "NO" << endl;
                                    return;
                                        }
                    if ((a > 0 && b == 0) || (b > 0 && a == 0)) {
                                cout << "NO" << endl;
                                        return;
                                            }

                        cout << "YES" << endl;

                            int ties = n - (a + b); // How many cards are for the "Tie" deck
                                
                                // We create vectors to store the final hands
                                vector<int> alice;
                                    vector<int> bob;

                                        // Both play the numbers 1, 2, ... up to 'ties'
                                        // Result: All Matches.
                                        for (int i = 1; i <= ties; i++) {
                                                    alice.push_back(i);
                                                            bob.push_back(i);
                                                                }

                                            // These are the numbers left over (ties + 1 up to n)
                                            vector<int> fight_deck;
                                                for (int i = ties + 1; i <= n; i++) {
                                                            fight_deck.push_back(i);
                                                                }

                                                    // Alice plays the Fight Deck exactly as it is (Sorted)
                                                    for (int card : fight_deck) {
                                                                alice.push_back(card);
                                                                    }

                                                        // We need Bob to win 'b' times.
                                                        // RULE: Right Shift the Fight Deck by 'b'.
                                                        
                                                        // Safety check: only do this if there IS a fight deck
                                                        if (!fight_deck.empty()) {
                                                                    int m = fight_deck.size();
                                                                            
                                                                            // These go to the FRONT of Bob's hand.
                                                                            // Example: If deck is {2, 3, 4} and b=2. We grab {3, 4}.
                                                                            for (int i = 0; i < b; i++) {
                                                                                             // Math: start at index (m - b)
                                                                                            bob.push_back(fight_deck[m - b + i]);
                                                                                                    }

                                                                                    // These go to the BACK of Bob's hand.
                                                                                    // Example: We grab {2}.
                                                                                    for (int i = 0; i < m - b; i++) {
                                                                                                    bob.push_back(fight_deck[i]);
                                                                                                            }
                                                                                        }

                                                            for (int x : alice) cout << x << " ";
                                                                cout << endl;
                                                                    
                                                                    for (int x : bob) cout << x << " ";
                                                                        cout << endl;
}

int main() {
        // Fast I/O standard for competitive programming
        ios::sync_with_stdio(false);
            cin.tie(NULL);

                int t;
                    cin >> t; // Read number of test cases
                        while (t--) {
                                    solve();
                                        }
                            return 0;
}
