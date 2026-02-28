// #pragma GCC optimize("Ofast")
// #pragma GCC optimize ("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmn,avx,tune=native")

#include<bits/stdc++.h>
using namespace std;

#include<complex>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

#define x() real()
#define y() imag()
#define endl '\n'
#define ll long long
#define bigint __int128
typedef long double T;
typedef complex<T> point;
#define pii pair<int,int>
#define nl       "\n"
#define all(x) x.begin(),x.end()
#define fastIO cin.tie(0)->sync_with_stdio(0);
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;

using namespace __gnu_pbds;
template <typename T> using o_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

//If you can't solve a problem then there's an easier
//sub-problem that you can not solve.Find it!!

vector<int> calc(vector<int> a)
{
      int n = a.size();
      vector<bool>is(n);

      for (int i = 1 ; i < n - 1 ; i++)
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
            is[i] = true;

      stack<int>st;
      vector<int>dp(n);

      for (int i = 0 ; i < n ; i++)
      {
        while (st.size() > 0 && a[st.top()] < a[i]){
            st.pop();
            // finds nearest greater element on the left
        }

          dp[i] = 1;

       if (st.size() > 0){  // when.. i ==0,first it is skipped.
            dp[i] += dp[st.top()]; // extend the decreasing chain.. 
        }

        // Remove all smaller elements on the left

        // The top of stack is now the nearest greater element on the left

        // If such element exists → inherit its dp

          st.push(i);
      }

      return dp;
}

int main()
{
    fastIO;

    int t = 1; cin >> t;

    while(t--)
    {
        int n; cin >> n;

        vector<int>a(n);

        for (int& i : a) cin >> i;
        

        auto pre = calc(a);
        // pre = lenght of valid decreasing chain ending at i..

        output(pre);
        reverse(all(a));

        auto suf = calc(a);
        //suf = length of valid decreasing chain starting from ai..

        reverse(all(suf));

        output(suf);

        int mx = 0;

        for (int i = 0 ; i < n ; i++)
        {
            mx = max(mx , pre[i] + suf[i] - 1);

            //cout << pre[i] << ' ' << suf[i] << endl;
        }

       cout << n - mx << endl;
        
    }

    return 0;
}
