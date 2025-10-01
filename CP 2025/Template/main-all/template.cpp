#include <bits/stdc++.h>
using namespace std;

// Type Definitions
#define ll long long
#define nl '\n'

// Macros
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"

// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void fastio() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}


//=============geometry=====================//
bool intersect(Point a, Point b, Point c, Point d) {
    auto cross = [](Point p1, Point p2, Point p3) {
        return (p2.x - p1.x) * (p3.y - p1.y) -
               (p2.y - p1.y) * (p3.x - p1.x);
    };

    long long c1 = cross(a, b, c);
    long long c2 = cross(a, b, d);
    long long c3 = cross(c, d, a);
    long long c4 = cross(c, d, b);

    if (c1 == 0 && c2 == 0 && c3 == 0 && c4 == 0) {
        // check projection overlap
        auto between = [](long long a, long long b, long long c) {
            return min(a, b) <= c && c <= max(a, b);
        };
        return between(a.x, b.x, c.x) || between(a.x, b.x, d.x) ||
               between(c.x, d.x, a.x) || between(c.x, d.x, b.x);
    }

    return (c1 * c2 <= 0) && (c3 * c4 <= 0);
}

//---------polygon-area-----------//
for (int i = 0; i < n; i++) {

    int j = (i + 1) % n ;

    area += ((x[i] * y[j]) - (x[j] * y[i]))  ;

}

// ========== Number Theory Utilities ==========

int lcm(int a, int b) { return (a / __gcd(a, b)) * b; }


// recursive divide and conquer


int binpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
//========== prime generation(sieve)=======//

bool vis[N] ;
vector<int> prime ;

void sieve() {

    for (int i = 2; i * i < N; i++) {
        if (vis[i]) continue;

        for (int j = i * i; j < N; j += i) {
            vis[j] = true;
        }
    }

    for (int i = 2; i < N; i++) {
        if (!vis[i]) prime.push_back(i);
    }
}

//----legendre formula-------//

int legendre(int n , int p) {
    int ans = 0 ;
    while (n) {
        ans += n / p ; // first n/p , then n/p^2 , then n/p^3

        n /= p ;
    }
    return ans ;
}

//=========== spf ==================//

// for prime expo info / factorize many number quickly

int spf[N] ;
void sieve() {

    for (int i = 2; i < N; i++) {
        spf[i] = i;
    }
    for (int i = 2; i < N; i++) {
        if (spf[i] == i) {
            for (int j = i; j < N; j += i) {
                spf[j] = min(spf[j], i);
            }
        }
    }

}

vector<pair<int, int>> getFactorization(int x) {
    vector<pair<int, int>> res;
    while (x > 1) {
        int p = spf[x];
        int cnt = 0;
        while (x % p == 0) {
            x /= p;
            cnt++;
        }
        res.push_back({p, cnt});
    }
    return res;
}




//----------------is_prime---------------------//

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

//============= kadans algo=======================//
int ans = -1e18 ;
int  max_sub_sum = -1e18;

for (int l = 0 ; l < n; l++) {

    max_sub_sum = max(a[l], a[l] + max_sub_sum);

    ans = max(ans, max_sub_sum) ;

}

// ============ bitwise operations ==============//

int check_kth_bit(int x , int k) {

    return (x >> k) & 1 ;
}
int print_on_bits(int x) {

    for (int k = 0; k < 32 ; k++) {

        if (check_kth_bit(x, k)) {

            cout << k << ' ' ;  // print setbit/onbit ;
        }

    }
}
int print_off_bits(int x) {

    for (int k = 0; k < 32 ; k++) {

        if (!check_kth_bit(x, k)) {

            cout << k << ' ' ;  // print setbit/onbit ;
        }

    }
}
bool is_even(int x) {

    if (x & 1) { // just check if last bit is on/off

        return false ;
    }
    else {

        return true ;
    }
}
int set_kth_bit(int x , int k) {

    return x | (1 << k) ;
}
int unset_kth_bit(int x , int k) {

    return x & (~(1 << k)) ;
}
// ========== Segment Tree (Optional Use) ==========

int a[N], t[4 * N];

void build(int node, int begin, int end) {
    if (begin == end) {
        t[node] = a[begin];
        return;
    }
    int mid = (begin + end) / 2;
    build(2 * node, begin, mid);
    build(2 * node + 1, mid + 1, end);
    t[node] = t[2 * node] + t[2 * node + 1];
}

int query(int node, int begin, int end, int i, int j) {
    if (begin > j || end < i) return 0;
    if (begin >= i && end <= j) return t[node];
    int mid = (begin + end) / 2;
    return query(2 * node, begin, mid, i, j)
           + query(2 * node + 1, mid + 1, end, i, j);
}

void update(int node, int begin, int end, int i, int x) {
    if (begin > i || end < i) return;
    if (begin == end) {
        t[node] = x;
        return;
    }
    int mid = (begin + end) / 2;
    update(2 * node, begin, mid, i, x);
    update(2 * node + 1, mid + 1, end, i, x);
    t[node] = t[2 * node] + t[2 * node + 1];
}

// ========== Binary Search Template ==========

int binary_search_example(vector<int>& v, int target) {
    int l = 0, r = v.size() - 1, ans = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (v[mid] == target) return mid; // or store answer & continue
        if (v[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return ans;
}

// ========== DFS & BFS Module ==========

vector<pair<int, int >> g[N] ;
vector<int> g[N];
bool vis[N];
int dis[N], par[N], sub[N] ; // sub = subtree ..

// DFS

void dfs(int u) {
    vis[u] = true;
    for (auto v : g[u]) {
        if (!vis[v])
        {
            dfs(v);
        }
    }
}

// Connected Components Counter

int count_connected_components(int n) {
    int ans = 0;
    fill(vis, vis + n + 1, false);
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
            ++ans;
        }
    }
    return ans;
}

// BFS

void bfs(int start) {

    queue<int > q ;
    q.push(start) ;
    vis[start] = true ;

    while (!q.empty()) {
        int u = q.front() ;
        q.pop() ;

        for (auto v : g[u]) {

            if (!vis[v]) {

                q.push(v) ; // push child at last of the queue ;

                vis[v] = true ;
            }
        }
    }
}

// Path Reconstruction (BFS)
vector<int> get_path(int dest) {
    vector<int> path;
    while (dest != -1) {
        path.push_back(dest);
        dest = par[dest];
    }
    reverse(all(path));
    return path;
}

// Dijkstra's algorithm

void dijkstra(int start, int n) {
    // initialize distance with infinity
    const int INF = 1e9;
    for (int i = 1; i <= n; i++) {
        dis[i] = INF;
        par[i] = -1;
        vis[i] = false;
    }

    dis[start] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start}); // {distance, node}

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (vis[u]) continue;
        vis[u] = true;

        for (auto [v, w] : g[u]) {
            if (dis[u] + w < dis[v]) {
                dis[v] = dis[u] + w;
                par[v] = u;
                pq.push({dis[v], v}); // pushing child and its distance ;
            }
        }
    }
}

//Bellman - ford ...
struct Edge {
    int u, v, w;
};

vector<Edge> edges;
int dis[N], par[N];

bool bellman_ford(int start, int n, int m) {
    const int INF = 1e9;
    for (int i = 1; i <= n; i++) {
        dis[i] = INF;
        par[i] = -1;
    }
    dis[start] = 0;

    // Relax all edges (n - 1) times
    for (int i = 1; i <= n - 1; i++) {
        for (auto e : edges) {
            if (dis[e.u] != INF && dis[e.u] + e.w < dis[e.v]) {
                dis[e.v] = dis[e.u] + e.w;
                par[e.v] = e.u;
            }
        }
    }

    // Detect negative cycle
    for (auto e : edges) {
        if (dis[e.u] != INF && dis[e.u] + e.w < dis[e.v]) {
            return false; // negative cycle found
        }
    }
    return true;
}

//-------------MEX------------//
int get_mex(const vector<int>& a) {
    int n = a.size();
    vector<bool> present(n + 5, false); // +5 for safety margin

    for (int x : a) {
        if (x < n + 5) {
            present[x] = true;
        }
    }

    for (int i = 0; i < n + 5; ++i) {
        if (!present[i]) return i;
    }
}



void solve ()
{


}

int32_t main() {
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int t = 1 ;

    cin >> t ;

    while (t--) {

        solve() ;

    }


    return 0;
}
