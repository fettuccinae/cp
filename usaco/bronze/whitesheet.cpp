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
    int area() { return (y2 - y1) * (x2 - x1); }  // Area of the rectangle
};

int intersect(Rect p, Rect q) {
    // Calculate overlap in x and y directions
    int xOverlap = max((int)0, min(p.x2, q.x2) - max(p.x1, q.x1));
    int yOverlap = max((int)0, min(p.y2, q.y2) - max(p.y1, q.y1));
    return xOverlap * yOverlap;  // Area of intersection
}

Rect intersect_points(Rect p, Rect q) {
    Rect i;
    i.x1 = max(p.x1, q.x1);
    i.x2 = min(p.x2, q.x2);
    i.y1 = max(p.y1, q.y1);
    i.y2 = min(p.y2, q.y2);
    return i;
}

int32_t main() {
    //freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    Rect w, b0, b1, wb0, wb1;
    w.read(); b0.read(); b1.read();
    int b_intersect = intersect(b0, b1);
    int wb0_intersect = intersect(w, b0), wb1_intersect = intersect(w, b1);
    int res = w.area() - wb0_intersect - wb1_intersect;

    if (wb0_intersect > 0) {
        wb0 = intersect_points(w, b0);
    }
    if (wb1_intersect > 0) {
        wb1 = intersect_points(w, b1);
    }
    if (wb0_intersect > 0 && wb1_intersect > 0) {
        res += intersect(wb0, wb1);
    }


    if (res <= 0) {
        cout << "NO" << endl;
    }
    else {
        cout << "Yes" << endl;
    }

    return 0;
}