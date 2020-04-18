#include <bits/stdc++.h>
#define rep0(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int N = 0, W = 0;
    cin >> N >> W;

    vector<int> w(N + 1, 0), v(N + 1, 0);
    for (int i = 1; i <= N; i++)
    {
        cin >> w[i] >> v[i];
    }

    ll dp[N + 1][100001];
    for (int i = 0; i < N + 1; i++)
    {
        for (int j = 0; j < 100001; j++)
        {
            dp[i][j] = 2000000000;
        }
    }

    // vector<vector<ll>> dp(N + 1, vector<ll>(100001, 2000000000));
    dp[0][0] = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= 100000; j++)
        {
            if (j < v[i])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
            }
        }
    }

    int ans = 100000;
    while (dp[N][ans] > W)
    {
        ans--;
    }

    cout << ans << endl;

    return 0;
}