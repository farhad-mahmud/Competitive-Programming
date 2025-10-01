#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
        
         int n, m, i, j, k, sum = 0, ans = 0, f = 0;

        cin >> n >> k;

        int a[n + 5], b[n + 5],mii = INT_MAX, mxx = INT_MIN;

        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        set<int>sums;

        for (i = 1; i <= n; i++)
        {
            cin >> b[i];
            if (b[i] != -1)
            {
                sum = a[i] + b[i];
                sums.insert(sum);
            }
        }

        if (sums.size()==0)
        {
            sort(a + 1, a + n + 1);
            int mi = a[n] - a[1];
            ans = max(k - mi + 1, 0ll);
            cout << ans << endl;

            return ;
           
        }

        if(sums.size()>1)
        {
            cout << 0 << endl;
            
            return ;
        }



        for (i = 1; i <= n; i++)
        {
            if (b[i] == -1)
            {
                int need = sum - a[i];
                if (need >= 0 and need <= k){
                    
                      continue ;
                }
                else{
                    f = 1;
                }
            }
        }

        if(!f) 
         {
            cout<<1<<endl;
         }

         else {

            cout<<0<<endl;

         }


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
