#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(x) x.begin(), x.end()
const int N = 1e5 + 9;

vector<int> g[N];
vector<bool> vis(N);
vector<pair<int, int>> ans;
int n;

void dfs(int u, bool ok)
{
    vis[u] = true;

    for (auto v : g[u])
    {
        if (vis[v])
            continue;

        if (ok)
            ans.push_back({v, u});
        else
            ans.push_back({u, v});

        dfs(v, !ok);
    }
}

void solve()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        g[i].clear();
        vis[i] = false;
    }
    ans.clear();

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int r = 0;
    while (r < n && g[r].size() != 2)
        r++;

    if (r >= n)
    {
        no;
        return;
    }

    yes;

    ans.emplace_back(r, g[r][0]);
    ans.emplace_back(g[r][1], r);
    vis[r] = true;

    dfs(g[r][0], true);
    dfs(g[r][1], false);

    sort(all(ans));

    for (auto i : ans)
    {
        cout << i.first + 1 << ' ' << i.second + 1 << nl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
