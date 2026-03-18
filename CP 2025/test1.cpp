#include <bits/stdc++.h>
//#include "debug.hpp"
using namespace std;


//#define int int64_t
#define nl '\n'
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
//const long double pi = acos(-1);

const int N = 2e5 + 7;

vector<int> g[N];
bool vis[N];
int col[N];

int cnt = 0;
int cnt0 = 0, cnt1 = 0;

bool bi = true;

void dfs(int u) {
    vis[u] = true;

    if(col[u]) cnt1++;
    else cnt0++;

    for(auto v: g[u]) {
        if(!vis[v]) {
            col[v] = col[u] ^ 1;
            dfs(v);
        }
        else {
            if(col[u] == col[v]) bi = false;
        }
    }
}

void testCase(){
    int n, m;
    cin >> n >> m;

    cnt = 0;

    memset(vis, 0, sizeof vis);
    memset(col, -1, sizeof col);

    for(int i = 1; i <= n; i++) g[i].clear();

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            bi = true;
            cnt0 = cnt1 = 0;
            col[i] = 0;
            dfs(i);
            if(bi) cnt += max(cnt1, cnt0);
        }
    }

    cout << cnt << nl;
}

signed main(){
    int t = 1;
    cin >> t;
    while(t--) testCase();
    return 0;
}