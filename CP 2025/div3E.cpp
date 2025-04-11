#include <bits/stdc++.h>

using namespace std;

#define int long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;

bool pain(vector<int>&v, int k, int x) { 

    if(x == 0) return true;

    int seg = 0, cnt = 0;

    vector<bool>vis(x, 0);  

    for(auto i : v) {
        if(i < x && !vis[i]){
            vis[i] = 1;
            cnt++;
        }
        if(cnt == x) {
            seg++ ;
            if(seg >= k) return true;
            cnt = 0;
            for(int i = 0; i < vis.size(); i++){
                vis[i] = 0;
            }
        }
    }
    return false;
}
void solve ()
{
         
                     int n, k; 
                  cin >> n >> k;

                   vector<int>v(n);

             for(int i = 0; i < n; i++){
                cin >> v[i];
                 }

            int lim = n+1;

           vector<int> f(lim, 0);       

            for(auto i : v){
              if(i < lim) f[i]++;     
           }

           int m = 0;

           while(m < lim && f[m] >= k) {
                     m++ ;           
           }                         
            

                     

          int l = 0, r = m;   
          int ans = 0;

          while(l <= r){

              int mid = (l+r)/2;

              if(pain(v, k, mid)){

                 ans = mid;
                 l = mid+1;
             } 
             else r = mid-1;
         }

        cout << ans << endl;

    }


                

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

    int t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
