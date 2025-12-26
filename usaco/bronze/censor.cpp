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
    // freopen("input.txt","r",stdin);
    // freopen("output.out","w",stdout);
    fastio;
    string s, t;
    cin >> s >> t;
    vector<int> flag(s.size(), 1);
    int i = 0;
    while (i < s.size()){
        if (flag[i] == 0){
            i++;
            continue;
        }
        bool sub = true;
        for (int j = 0; j < t.size(); j++)
        {
            while(s[i+j] == 0 && i < s.size()){
                i++;
            }
            if (s[i+j] != t[j]){
                sub = false;
            }
        }
        if (sub == false){
            i += t.size();
        }
        else{
            for (int j = 0; j < t.size(); j++){
                flag[i - j] = 0;
            }
            i = 0;
        }
    }
    for (int i = 0; i < s.size(); i++){
        if (flag[i] == 0){
            continue;
        }
        else{
            cout << s[i];
        }
    }
    cout << endl;

    return 0;
}