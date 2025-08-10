#include <bits/stdc++.h>
using namespace std;

int mex(vector<int> v) {
    sort(v.begin(), v.end());
    int mex = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == mex) {
            mex++;
        }
    }
    return mex;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int mx = *max_element(v.begin(), v.end());
        int mn = *min_element(v.begin(), v.end());
        if (mex(v) != mx - mn) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}