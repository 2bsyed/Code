#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int lcs(const string& X, const string& Y) {
    int m = X.size();
    int n = Y.size();

    int dp[m + 1][n + 1];

    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }

    return dp[m][n];
}

int main() {
    string s1, s2;

    while (getline(cin, s1)) {
        getline(cin, s2);

      
        cout << lcs(s1, s2) << endl;
    }

    return 0;
}