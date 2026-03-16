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


void solve ()
{  
       int n,m;
    cin>>n>>m;

    vector<int>a(n),b(n);

    for(int i=1 ;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    a[0] = m ;
    sort(all(a));
    sort(all(b));

    output(a);
    output(b);
      // i for a, j for b..

      int i=n-1, j = n-1 ;
      int cnt = 0 ;
      int ans = 0;
      int ans2 = 0 ;
   while(i >=0 && j >=0){
      if(b[j] > a[i]){
            cnt++ ;
            i--;
            j--;
      }
      else{
           i--;
      }
   }

   //cerr << cnt << nl;
   cout << n- cnt << nl;
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
