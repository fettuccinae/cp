#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

vector<string> cows = {
    "Beatrice",
    "Belinda",
    "Bella",
    "Bessie",
    "Betsy",
    "Blue",
    "Buttercup",
    "Sue"
};
int cond_nos;
vector<int> res;
vector<pair<string, string>> all_constraints;

bool is_solution_valid(const vector<int>& current_order) {
    for (const auto& p : all_constraints) {
        string name1 = p.first;
        string name2 = p.second;
        int original_idx1 = -1, original_idx2 = -1;
        int current_pos1 = -1, current_pos2 = -1;

        for (int i = 0; i < 8; ++i) {
            if (cows[i] == name1) original_idx1 = i;
            if (cows[i] == name2) original_idx2 = i;
        }

        for (int i = 0; i < 8; ++i) {
            if (current_order[i] == original_idx1) current_pos1 = i;
            if (current_order[i] == original_idx2) current_pos2 = i;
        }

        if (abs(current_pos1 - current_pos2) != 1) {
            return false;
        }
    }
    return true;
}

void evil_recursion(vector<int> local_res) {
    if (!res.empty()) {
        return;
    }

    if (local_res.size() == 8) {
        if (is_solution_valid(local_res)) {
            res = local_res;
        }
        return;
    }

    for (int i = 0; i < 8; ++i) {
        bool used = false;
        for (int cow_index : local_res) {
            if (cow_index == i) {
                used = true;
                break;
            }
        }
        if (!used) {
            vector<int> next_res = local_res;
            next_res.push_back(i);
            evil_recursion(next_res);
        }
    }
}

int32_t main() {
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);
    fastio;

    cin >> cond_nos;
    for (int i = 0; i < cond_nos; ++i) {
        string a, t1, t2, t3, t4, b;
        cin >> a >> t1 >> t2 >> t3 >> t4 >> b;
        all_constraints.push_back({a, b});
    }

    sort(cows.begin(), cows.end());

    evil_recursion({});

    for (int r : res) {
        cout << cows[r] << endl;
    }

    return 0;
}