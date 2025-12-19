#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#include <cstdio>

/*
 */
int32_t main()
{
    freopen("factory.in","r",stdin);
    freopen("factory.out","w",stdout);
    fastio;
    int n;
    cin >> n;
    vector<int> in_sink(n+1, 0), out_sink(n+1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        in_sink[b]++;
        out_sink[a]++;
    }
    bool sink_found = false;
    int idx = -1;
    for (int i = 1; i < n+1; i++)
    {
        if (sink_found == false && out_sink[i] == 0 && in_sink[i] > 0){
            sink_found = true;
            idx = i;
        }
        else if (sink_found == true && out_sink[i] == 0 && in_sink[i] > 0){
            cout << -1 << endl;
            return 0;
        }
    }
    if (sink_found == true){
        cout << idx << endl;
    }
    else{
        cout << -1 << endl;
    }

        return 0;
}