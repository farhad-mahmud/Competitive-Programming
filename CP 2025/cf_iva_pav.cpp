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

const int N = 2e5 + 9;
const int MOD = 1e9 + 7;
int n ;  
int a[N];
int pre[30][200001];
int  f(int l, int r){
    int ans = 0 ;

    for(int i=0;i<30;i++){
        if(pre[i][r+1] - pre[i][l] == 0){
            ans+= (1 << i);
        }
    }
   
   return ans ;

}

void solve ()
{  
            cin>> n;
            for(int i=0;i<n;i++)cin >> a[i];

            
            for(int j=0;j<30;j++){
                  pre[j][0] = 0 ;
              for(int i=0;i<n;i++){
                  if((1 << j) & a[i]){ 
                     pre[j][i+1] = pre[j][i];
                  }
                  else{
                     pre[j][i+1] = pre[j][i] + 1 ;
                  }
               }

            }
            int q ; cin >> q ;
            while(q--){ 
                    int l,k ;cin >> l >> k;
                    l--;
                    if(a[l] < k){
                       cout << -1 << ' ' ;
                       continue ;
                    }
                    int low = l , high= n-1 ;
                   while(low < high){
                        int mid = (low + high + 1 )/2 ;
                        
                        if(f(l,mid) >= k){
                             low = mid  ;
                        }
                        else {
                             high = mid -1 ;
                        }
                   }

                   cout << low + 1 << ' ' ;
            }

            cout << nl ;

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
