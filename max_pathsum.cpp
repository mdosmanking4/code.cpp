#include <bits/stdc++.h>
using namespace std;

int arr[100][100], r, c;
int dp[11][11];

int maxsum(int i, int j) {
    if (i == r && j == c)
        return arr[i][j];

    if (dp[i][j] != -1)
        return dp[i][j];

    int a = INT_MIN, b = INT_MIN;

    if (i + 1 <= r)
        a = maxsum(i + 1, j) + arr[i][j] ;
    if (j + 1 <= c)
        b = maxsum(i, j + 1) +arr[i][j] ;

    return dp[i][j] =  max(a, b);
}

int main() {
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
            cin >> arr[i][j];

    memset(dp, -1, sizeof(dp));
    cout << maxsum(1, 1) << endl;
    return 0;
}
