#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main() {
    //freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int tt; cin >> tt;
    while (tt--) {
        string s; cin >> s;
        string s1 = s;
        int n = s.size();
        int res1 = 0, res2 = 0;
        // for (int i = n - 2; i > -1; i--) {
        //     if (s[i] == 'C') {
        //         continue;
        //     }
        //     string check = s.substr(i, 2);
        //     if (check == "AB") {
        //         res1++;
        //         s[i] = 'B';
        //         s[i + 1] = 'C';
        //         int j = i;
        //         while (j > 1 && s[j - 1] == 'A') {
        //             s[j - 1] = 'B';
        //             s[j] = 'C';
        //             res1++;
        //             j--;
        //         }
        //     }
        //     else if (check == "BA") {
        //         res1++;
        //         s[i] = 'C';
        //         s[i + 1] = 'B';
        //         int j = i;
        //         while (j < n - 1 && s[j + 2] == 'A') {
        //             s[j + 1] = 'C';
        //             s[j + 1] = 'B';
        //             res1++;
        //             j++;
        //         }
        //     }
        // }
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'C') {
                continue;
            }
            string check = s.substr(i, 2);
            if (check == "AB") {
                res1++;
                s[i] = 'B';
                s[i + 1] = 'C';
                int j = i;
                while (j > 0 && s[j - 1] == 'A') {
                    s[j - 1] = 'B';
                    s[j] = 'C';
                    res1++;
                    j--;
                }
            }
            else if (check == "BA") {
                res1++;
                s[i] = 'C';
                s[i + 1] = 'B';
                int j = i+2;
                while (j < n && s[j] == 'A') {
                    s[j-1] = 'C';
                    s[j] = 'B';
                    res1++;
                    j++;
                }
            }
        }
        for (int i = 0; i < n - 1; i++) {
            if (s1[i] == 'C') {
                continue;
            }
            string check = s1.substr(i, 2);
            if (check == "BA") {
                res2++;
                s1[i] = 'C';
                s1[i + 1] = 'B';
                int j = i+2;
                while (j < n && s1[j] == 'A') {
                    s1[j-1] = 'C';
                    s1[j] = 'B';
                    res2++;
                    j++;
                }
            }
            else if (check == "AB") {
                res2++;
                s1[i] = 'B';
                s1[i + 1] = 'C';
                int j = i;
                while (j > 0 && s1[j - 1] == 'A') {
                    s1[j - 1] = 'B';
                    s1[j] = 'C';
                    res2++;
                    j--;
                }
            }
        }
        cout << max(res1, res2) << endl;
    }
    return 0;
}