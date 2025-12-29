//---  Bismillahir Rahmanir Rahim ---//


#include <bits/stdc++.h>
using namespace std;

#define ll long long

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

int cnt[N+1];
ll pairs[N+1];

void mobius(){

         vector<int > div ;
        for(int d = 1;d <=N;d++){
            if(cnt[d] > 2){
                pairs[d] = cnt[d]*(cnt[d]- 1) / 2 ;
            
            div.push_back(d) ;
           }
        }

         // for(auto i : cnt){
         //        div.push_back(i.first) ;
         // }
      sort(div.rbegin() , div.rend());

      for (int d : div) {
         for(int m = 2*d ;m <= N;m+=d){
              pairs[d] -= pairs[m] ;
         }
    }

}
void solve ()
{  
         int n ; cin >> n ;
         vector<int > a(n);for(int i=0;i<n;i++)cin >> a[i];

       for(int j=0;j<n;j++){ 
         for(int i = 1;i*i <=a[j];i++){

                if(a[j] % i == 0){
                    cnt[i]++ ;

                    if(i != a[j]/i){
                       cnt[a[j]/i]++ ;

                    }
                }
         }
      }

           mobius();

           cout << pairs[1] << nl ;

}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   // cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
