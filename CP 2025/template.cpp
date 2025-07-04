#include <bits/stdc++.h>
using namespace std;

// Type Definitions
#define int long long
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

// ========== Number Theory Utilities ==========

int lcm(int a, int b) { return (a / gcd(a, b)) * b; }


// recursive devide and conquer 

int power(int a, int b, int mod) {
    if (b == 0) return 1;  // base case

    int res = power(a, b / 2, mod);
    res = 1LL * res * res % mod;

    if (b % 2 == 1)
        res = 1LL * res * a % mod;

    return res;
}

// -----------------sieve ---------------------// 

bitset<N> is_prime; // N is a constant, e.g., N = 1000000
void sieve() {
  is_prime[1] = false; // 1 is not prime
  for (int i = 2; i < N; i++) {
    is_prime[i] = true; // Initially assume all numbers from 2 to N-1 are prime
  }
  for (int i = 2; i * i < N; i++) { // Iterate from 2 up to sqrt(N)
    if (is_prime[i]) { // If i is currently marked as prime
      for (int j = i * i; j < N; j += i) { // Mark all multiples of i (starting from i*i) as not prime
        is_prime[j] = false;
      }
    }
  }
}

//----------------is_prime---------------------// 

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
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

vector<int> g[N];
bool vis[N];
int dis[N], par[N];

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

void bfs(int source) {
    queue<int> q;
    fill(vis, vis + N, false);
    fill(dis, dis + N, 0);
    fill(par, par + N, -1);
    q.push(source);
    vis[source] = true;
    dis[source] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : g[u]) {
            if (!vis[v]) {
                q.push(v);
                par[v] = u;
                dis[v] = dis[u] + 1;
                vis[v] = true;
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


void solve ()
{

       
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
