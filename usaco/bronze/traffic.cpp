#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("traffic.in", "r", stdin);
	freopen("traffic.out", "w", stdout);
    int highway_miles;
    cin >> highway_miles;
    vector<string>type(highway_miles);
    vector<int>low(highway_miles);
    vector<int>high(highway_miles);

    for (int i = 0; i < highway_miles; i++){
        cin >> type[i] >> low[i] >> high[i];
    }
    int start = -1 * 1e9;
    int end = 1e9;

    // starting traffic
    for (int i = highway_miles-1; i > -1; i--){
        if (type[i] == "on"){
            start-=high[i];
            end-=low[i];
        }
        else if (type[i] == "off"){
            start += low[i];
            end += high[i];
        }
        else if (type[i] == "none"){
            start = max(start, low[i]);
            end = min(end, high[i]);
        }
    }
    start = max(0, start);
    cout << start << " " << end << endl;

    // ending traffic.
    start = -1 * 1e9;
    end = 1e9;

    for (int i = 0; i < highway_miles; i++){
        if (type[i] == "off"){
            start-=high[i];
            end-=low[i];
        }
        else if (type[i] == "on"){
            start += low[i];
            end += high[i];
        }
        else if (type[i] == "none"){
            start = max(start, low[i]);
            end = min(end, high[i]);
        }
    }
    start = max(0, start);
    cout << start << " " << end << endl;

}