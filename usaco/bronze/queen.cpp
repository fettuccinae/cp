#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int DIM = 8;

vector<vector<bool>>blocked(DIM, vector<bool>(DIM));
vector<bool>row_taken(DIM);
vector<bool>diag1(DIM * 2 - 1);
vector<bool>diag2(DIM * 2 - 1);

int res = 0;

void evil_recursion(int depth) {
    if (depth == DIM) {
        res++;
        return;
    }
    else {
        for (int r = 0; r < DIM; r++) {
            bool row_open = !row_taken[r];
            bool diag_open = !diag1[r + depth] && !diag2[r - depth + DIM - 1];
            if (!blocked[r][depth] && row_open && diag_open) {
                row_taken[r] = diag1[r + depth] = diag2[r - depth + DIM - 1] = true;
                evil_recursion(depth + 1);
                row_taken[r] = diag1[r + depth] = diag2[r - depth + DIM - 1] = false;
            }
        }
    }

}

int32_t main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    for (int i = 0; i < DIM; i++) {
        string row; cin >> row;
        for (int j = 0; j < DIM; j++) {
            if (row[j] == '*') {
                blocked[i][j] = true;
            }
        }
    }
    evil_recursion(0);
    cout << res << endl;

    return 0;
}