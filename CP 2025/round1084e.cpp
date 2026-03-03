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

const int N = 1e6 + 9;
const int MOD = 1e9 + 7;
int spf[N];
bool vis[N] ;
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

void solve ()
{  
            int n;  cin >> n ;
            vector<int > a(n); for(int i=0;i<n;i++)cin>> a[i]; 

            vector<int > p;

            vector<int > q = a ;
            sort(all(q));
            if(a==q){
                 cout << "Bob" << nl;
                 return ;
            }
            
            bool f = false ;
            for(int i=0;i<n;i++){
                  int lst = -1 ;
                  int cnt = 0 ;
                  int nm = a[i];
                  while(nm > 1){
                      if(spf[nm]!= lst){
                            cnt++ ;
                      }
                      lst = spf[nm];
                      nm/= spf[nm];
                  }

                  if(cnt > 1){
                      f = true ;
                      break ;
                  }

            }
            for(int i=0;i<n;i++){
                  a[i] = spf[a[i]];
            }

            //output(a);

           vector<int > k = a ;

           sort(all(k));

           if(k != a){
               f = true ;
           }

           if(f){
               cout << "Alice" << nl;
           }
           else {
               cout << "Bob" << nl; 
           }
            

}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   sieve();
   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
