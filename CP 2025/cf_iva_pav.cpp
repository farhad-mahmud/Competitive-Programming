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
int l , k ;
int pre[][];
bool f(int r){

   // wehave l and r now.. 
   int val= a[l];

   for(int i=l+1;i<=r;i++){
         val &= a[i];
   }

   return val >=k ;

}

void solve ()
{  
            cin>> n;
             for(int i=1;i<=n;i++)cin >> a[i];

            int q; cin >> q ;


            for(int i=1;i<=30;i++){
                 for(int i=1;i<=n;i++){
                        
                 }   
            }

            while(q--){ 
                    cin >> l >> k;
                    int high = l , low= n ;
                   while(high<=low){
                        int mid = (high+low)/2 ;
                        // if r++ ,, then and operation values decreases
                        // and vice versa 
                        if(f(mid)){
                             low = mid + 1 ;

                        }
                        else {
                             high = mid -1 ;
                        }
                   }

                   cout << high <<nl; 
            }

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
