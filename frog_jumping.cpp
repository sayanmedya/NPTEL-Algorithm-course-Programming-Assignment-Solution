#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
#define F first
#define S second
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fastio;
    int n, m;
    cin >> n >> m;
    int R[n][m], D[n][m];
    for (int i = 0;i < n;++i)
        for (int j = 0;j < m;++j)
            cin >> R[i][j];
    for (int i = 0;i < n;++i)
        for (int j = 0;j < m;++j)
            cin >> D[i][j];
    short level[n][m];
    for (int i = 0;i < n;++i)
        for (int j = 0;j < m;++j)
            level[i][j] = -1;
    queue <pii> Q;
    Q.push({0, 0});
    level[0][0] = 0;
    while (!Q.empty()) {
        int x = Q.front().F;
        int y = Q.front().S;
        Q.pop();
        int R_max_in = min(y + R[x][y] + 1, m);
        int D_max_in = min(x + D[x][y] + 1, n);
        for (int i = y + 1; i < R_max_in ;++i)
            if (level[x][i] == -1) {
                level[x][i] = level[x][y] + 1;
                Q.push({x, i});
            }
        for (int i = x + 1; i < D_max_in ;++i)
            if (level[i][y] == -1) {
                level[i][y] = level[x][y] + 1;
                Q.push({i, y});
            }
    }
    cout << level[n - 1][m - 1] << "\n";
}
