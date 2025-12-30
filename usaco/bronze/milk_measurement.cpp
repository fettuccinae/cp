#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
int32_t main(){
    freopen("measurement.in","r",stdin);
    freopen("measurement.out","w",stdout);
    fastio;
    int n;
    cin >> n;
    vector<pair<string, string>> data(101, make_pair("", ""));
    vector<int> score(3, 7);
    for (int i = 0; i < n; i++)
    {
        int temp;
        string s, t;
        cin >> temp >> s >> t;
        data[temp] = make_pair(s, t);
    }
    int res = 0;
    int maxx = 7;
    set<int> max_res = {0, 1, 2};
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i].first != "")
        {
            if (data[i].first == "Mildred"){
                score[0] += stoi(data[i].second);
            }
            else if (data[i].first == "Elsie"){
                score[1] += stoi(data[i].second);
            }
            else if (data[i].first == "Bessie"){
                score[2] += stoi(data[i].second);
            }
            else{
                cout << "YOU TWEAKING JIHWAS";
            }
            set<int> temp_set;
            int tt = 0;
            for (int j = 0; j < 3; j++)
            {
                tt = max(score[j], tt);
            }
            for (int j = 0; j < 3; j++){
                if (score[j] == tt)
                    temp_set.insert(j);
            }
            if (temp_set != max_res){
                res++;
                max_res = temp_set;
            }
        }
    }
    cout << res << endl;
    return 0;
}