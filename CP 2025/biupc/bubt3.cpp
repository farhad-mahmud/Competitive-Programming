#include "bits/stdc++.h"
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

struct _
{
    ios_base::Init i;
    _()
    {
        cin.sync_with_stdio(0);
        cin.tie(0);
        cout << fixed << setprecision(10);
    }
} ___;
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cerr << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << "  ";
    __f(comma + 1, args...);
}

#define ll long long
#define pii pair<int, int>
#define oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ff first
#define ss second
#define endll '\n'
#define rep(i, n) for (int i = 0; i++ < n;)
#define scl(i) scanf("%lld", &i)
#define int long long int
#define all(n) n.begin(), n.end()
#define mem(n, i) memset(n, i, sizeof n)
#define em(a) emplace_back(a)
#define pb(a) push_back(a)
#define srep(it, vv) for (auto &it : vv)
#define prep(it, vv) for (auto it : vv)
#define b_s(a, b) binary_search(a.begin(), a.end(), b)
#define l_b(a, b) lower_bound(a.begin(), a.end(), b)
#define u_b(a, b) upper_bound(a.begin(), a.end(), b)
#define uniq(x)               \
    sort(x.begin(), x.end()); \
    x.erase(unique(x.begin(), x.end()), x.end())
// vector<vector<int>>arr(n + 5, vector<int>(m + 5,0));

typedef vector<int> vii;
typedef vector<ll> vll;
typedef vector<pii> vpp;
typedef vector<string> vss;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
{
    return uniform_int_distribution<int>(l, r)(rng);
}


void string_with_specific_char(const char &ch, ll &sz, string &str)
{
    while (sz--)
    {
        str.push_back(ch);
    }
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    set<ll> st;
    ll x;
    cin >> x;
    while(x--){
        ll tmp;
        cin >> tmp;
        st.insert(tmp);
    }
    map<ll,ll> mp;
    vector<vll> all_data;
    for(auto i = 0;i<n;++i){
        ll z;
        cin >> z;
        vll data(z);
        for(ll& it:data){
            cin >> it;
            mp[it]++;
        }
        all_data.push_back(data);
    }
    ll cnt = 0;
    for(auto lt:all_data){
        for(ll it:lt){
            if(st.count(it)){
                st.erase(it);
            }else{
                st.insert(it);
            }
        }
        if(st.empty()){
            cout << cnt + 1 << endll;
            return;
        }
        cnt++;
    }
    for(auto lt:all_data){
        for(ll it:lt){
            if(st.count(it)){
                st.erase(it);
            }else{
                st.insert(it);
            }
        }
        if(st.empty()){
            cout << cnt + 1 << endll;
            return;
        }
        cnt++;
    }

    
    cout << -1 << endll;
}

signed main()
{
    ll T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
}