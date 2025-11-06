#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm> 

#define int long long

// Using namespace std for brevity
using namespace std;

// Macro for faster I/O
// https://www.codechef.com/START181D/problems/FINDOUT
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int32_t main() {
    fastio; 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ve(n); 
        unordered_set<int> se;      
        for (int i = 0; i < n; ++i) {
            cin >> ve[i];
            se.insert(ve[i]);
        }

        if (n == 1) {
            if (ve[0] == 0) {
                cout << -1 << "\n";
            } else {
                cout << ve[0] << " " << ve[0] << "\n";
            }
            continue;
        }

        sort(ve.begin(), ve.end());

        int a_min = ve[0];     
        int a_max = ve[n - 1];

        bool found = false; 

        if (se.find(a_min + a_min) == se.end()) {
            cout << a_min << " " << a_min << "\n";
            found = true;
        }

        if (!found && se.find(a_max + a_max) == se.end()) {
            cout << a_max << " " << a_max << "\n";
            found = true;
        }

        if (!found && se.find(a_min + a_max) == se.end()) {
            cout << a_min << " " << a_max << "\n";
            found = true;
        }

        if (!found) {
            cout << -1 << "\n";
        }
    }
    return 0;
}
