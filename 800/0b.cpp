#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int count0 = 0;
    int count1 = 0;
    for (char c : s) {
        if (c == '0') {
            count0++;
        } else {
            count1++;
        }
    }

    int total = n / 2; 
    int bad = total - k;

    bool possible = false;

    for (int num_00_good = 0; num_00_good <= k; ++num_00_good) {
        int num_11_good = k - num_00_good;

        int zeros_needed_for_good_pairs = 2 * num_00_good;
        int ones_needed_for_good_pairs = 2 * num_11_good;

        if (zeros_needed_for_good_pairs > count0) {
            continue; 
        }
        if (ones_needed_for_good_pairs > count1) {
            continue; 
        }

        int remaining_zeros = count0 - zeros_needed_for_good_pairs;
        int remaining_ones = count1 - ones_needed_for_good_pairs;

        if (remaining_zeros >= bad &&
            remaining_ones >= bad) {
            possible = true;
            break;
        }
    }

    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}