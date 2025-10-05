#include <bits/stdc++.h>
using namespace std;

struct Interaction {
    int t, x, y;
};

int N, T;
string final_state;
vector<Interaction> interactions;

bool simulate(int patient_zero, int K) {
    vector<int> infected(N + 1, 0);
    vector<int> spread_count(N + 1, 0);
    infected[patient_zero] = 1;

    for (auto& ev : interactions) {
        int x = ev.x, y = ev.y;
        bool x_inf = infected[x], y_inf = infected[y];

        if (x_inf && spread_count[x] < K) {
            infected[y] = 1;
        }
        if (y_inf && spread_count[y] < K) {
            infected[x] = 1;
        }

        if (x_inf) spread_count[x]++;
        if (y_inf) spread_count[y]++;
    }

    for (int i = 1; i <= N; i++) {
        if ((final_state[i - 1] == '1') != infected[i]) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> T;
    cin >> final_state;
    interactions.resize(T);

    for (int i = 0; i < T; i++) {
        cin >> interactions[i].t >> interactions[i].x >> interactions[i].y;
    }
    sort(interactions.begin(), interactions.end(), [](auto& a, auto& b) {
        return a.t < b.t;
        });

    set<int> possible_zeros;
    int minK = INT_MAX;
    int maxK = -1;
    bool infinite = false;

    for (int cow = 1; cow <= N; cow++) {
        if (final_state[cow - 1] == '0') continue;

        int localMin = INT_MAX, localMax = -1;
        for (int K = 0; K <= T; K++) {
            if (simulate(cow, K)) {
                possible_zeros.insert(cow);
                localMin = min(localMin, K);
                localMax = max(localMax, K);
            }
        }
        if (localMin != INT_MAX) {
            minK = min(minK, localMin);
            if (localMax == T) infinite = true;
            else maxK = max(maxK, localMax);
        }
    }

    cout << possible_zeros.size() << " " << minK << " ";
    if (infinite) cout << "Infinity\n";
    else cout << maxK << "\n";
    return 0;
}
