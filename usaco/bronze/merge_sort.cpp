#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#include <cstdio>

/*
*/
void merge(vector<int>& arr, int left, int mid, int right) {
    int l_left = mid - left + 1;
    int l_right = right - mid;

    vector<int>temp_l(l_left), temp_r(l_right);

    for (int i = 0; i < l_left; i++) {
        temp_l[i] = arr[i + left];
    }
    for (int j = 0; j < l_right; j++) {
        temp_r[j] = arr[j + mid+ 1];
    }

    int i = 0, j = 0, k = left;
    while (i < l_left && j < l_right) {
        if (temp_l[i] <= temp_r[j]) {
            arr[k++] = temp_l[i++];
        }
        else {
            arr[k++] = temp_r[j++];
        }
    }
    while (i < l_left) {
        arr[k++] = temp_l[i++];
    }
    while (j < l_right) {
        arr[k++] = temp_r[j++];
    }
}

void evil_recursion(vector<int>& data, int left, int right) {
    if (left >= right) {
        return;
    }
    else {
        int mid = left + (right - left) / 2;
        evil_recursion(data, left, mid);
        evil_recursion(data, mid + 1, right);
        merge(data, left, mid, right);
    }
}

int32_t main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    fastio;
    int tt; cin >> tt;
    vector<int>data(tt);
    for (int i = 0; i < tt; i++) {
        cin >> data[i];
    }
    evil_recursion(data, 0, data.size() - 1);

    for (int i : data) {
        cout << i << endl;
    }



    return 0;
}