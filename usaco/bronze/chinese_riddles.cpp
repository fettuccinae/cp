#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
https://usaco.org/index.php?page=viewproblem2&cpid=1107
*/
int32_t main() {
    //freopen("input.txt"","r"",stdin);
    //freopen("output.out"","w"",stdout);
    fastio;
    int n; cin >> n;
    unordered_map<string, int>months(12);
    vector<string>data = { "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat" };
    for (int i = 0; i < 12; i++) {
        months[data[i]] = i;
    }

    unordered_map<string, int>cows_bday;
    cows_bday["Bessie"] = 20736;
    for (int i = 0; i < n; i++) {
        vector<string>input(5);
        cin >> input[0] >> input[4] >> input[4] >> input[1] >> input[2] >> input[4] >> input[4] >> input[3];
        int master_idx = ((cows_bday[input[3]] % 12) + 12) % 12;
        int slave_idx = months[input[2]];

        if (input[1] == "previous") {
            if (master_idx <= slave_idx) {
                cows_bday[input[0]] = cows_bday[input[3]] -  (12 + master_idx - slave_idx );
            }
            else {
                cows_bday[input[0]] = cows_bday[input[3]] - (master_idx - slave_idx);
            }
        }
        else {
            if (master_idx >= slave_idx) {
                cows_bday[input[0]] = cows_bday[input[3]] + 12 - (master_idx - slave_idx);
            } 
            else {
                cows_bday[input[0]] = cows_bday[input[3]] + (slave_idx - master_idx);

            }
        }
    }
    cout << abs(cows_bday["Bessie"] - cows_bday["Elsie"]) << endl;
    return 0;
}