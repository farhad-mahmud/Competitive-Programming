//---  Bismillahir Rahmanir Rahim ---//


#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n"

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end()
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;

// constrains

const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

vector<int > dec_stack(vector<int>a){
       int n = a.size();
   
      stack<int>st;
      vector<int>dp(n);

      for (int i=0;i<n;i++)
      {
        while (st.size() > 0 && a[st.top()] < a[i]){
            st.pop();
            
        }
          dp[i] = 1;

       if (st.size() > 0){  
            dp[i] += dp[st.top()];  
        }

          st.push(i);
      }

      return dp;
}
void solve ()
{     
       int n ; cin >> n ;
       vector<int > a(n); for(int i=0;i<n;i++)cin >>a[i] ;
        bool f = false ;

      for (int i = 1 ; i < n - 1 ; i++){
        if (a[i] > a[i - 1] && a[i] > a[i + 1]){
               f = true ;
         }
      }
      
       if(!f){
           cout << 0 << nl ;
           return ;
       }

        auto pre = dec_stack(a);
      
        //output(pre);
        reverse(all(a));

        auto suf = dec_stack(a);

        reverse(all(suf));

        //output(suf);

        int mx = 0;

        for (int i=0;i<n;i++)
        {
            mx = max(pre[i]+suf[i] -1 , mx) ;

        }

       cout << n - mx << endl;

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
