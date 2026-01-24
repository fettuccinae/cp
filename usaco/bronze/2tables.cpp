#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
struct Rect {
    int x1, y1, x2, y2;
    void read() { cin >> x1 >> y1 >> x2 >> y2; }
    int area() { return (y2 - y1) * (x2 - x1); }
    int length() { return (x2 - x1); }
    int breadth() { return (y2 - y1); }
};

int intersect(Rect p, Rect q) {
    // Calculate overlap in x and y directions
    int xOverlap = max((int)0, min(p.x2, q.x2) - max(p.x1, q.x1));
    int yOverlap = max((int)0, min(p.y2, q.y2) - max(p.y1, q.y1));
    return xOverlap * yOverlap;  // Area of intersection
}
pair<int, int> intersect_dist(Rect p, Rect q) {
    int xOverlap =  min(p.x2, q.x2) - max(p.x1, q.x1);
    int yOverlap =  min(p.y2, q.y2) - max(p.y1, q.y1);
    return make_pair(xOverlap, yOverlap);
}
int32_t main() {
    //freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int tt; cin >> tt;
    while (tt--) {
        int w, h; cin >> w >> h;
        Rect t0, t1;
        t0.read();
        int ww, hh; cin >> ww >> hh;
        t1.x1 = 0; t1.x2 = ww; t1.y1 = 0; t1.y2 = hh;
        bool l_valid = t0.length() + t1.length() <= w;
        bool b_valid = t0.breadth() + t1.breadth() <= h;

        if (!l_valid && !b_valid) {
            cout << -1 << endl;
            continue;
        }
        if (intersect(t0, t1) == 0) {
            cout << 0 << endl;
            continue;
        }
        pair<int, int> dist = intersect_dist(t0, t1);
        
        if (l_valid && !b_valid) {
            cout << dist.first << endl;
        }
        else if (!l_valid && b_valid) {
            cout << dist.second << endl;
        }
        // This should never happen?
        else if (l_valid && b_valid){
            cout << min(dist.first, dist.second) << endl;
        }



    }
    return 0;
}