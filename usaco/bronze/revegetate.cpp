#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main() {
     freopen("revegetate.in", "r", stdin);
    freopen("revegetate.out", "w", stdout);
    fastio;

    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<int> grass(n, 0);

    for (int i = 0; i < n; i++) {
        bool used[5] = {false};

        for (int neighbor : graph[i]) {
            if (grass[neighbor] != 0) {
                used[grass[neighbor]] = true;
            }
        }

        for (int g = 1; g <= 4; g++) {
            if (!used[g]) {
                grass[i] = g;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << grass[i];
    }
    cout << '\n';

    return 0;
}