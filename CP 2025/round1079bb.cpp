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

// 7
// 6 4 5 7 2 3 4
// 6 5 7 7 7 2 2 

void solve ()
{  
      int n ; cin >> n ;
      vector<int> p(n+1); for(int i=1;i<=n;i++)cin >> p[i];
      vector<int > a(n+1); for(int i=1;i<=n;i++)cin>> a[i] ;
        
      for(int i=1;i<=n;i++){
           if(a[i] > n){
                 no;
                 return ;
           }
      } 

      map<int,int > hash ;
       vector<int> ind(n+1);
      for(int i=1;i<=n;i++){
          hash[a[i]]++;
          ind[p[i]]= i ;
      }


      vector<int > nw(n+1) ;
      for(int i=1;i<=n;i++){
           if(p[i] == a[i]){
               hash[a[i]]-- ;
               nw[i] = a[i] ;
           }
           else{
              if(hash[p[i]]>0){ 
                  if(ind[a[i]] > i){
                      no ;
                      return ;
                  }
                  else if(ind[a[i]] == i-1){
                       nw[i] = a[i] ;
                       //cerr << nw[i] << nl;
                       hash[a[i]]-- ;
                  }

                 int freq = hash[p[i]];
                 //cerr << freq << nl ;
                for(int j = i+1; j < (i+1)+ freq; j++){
                        nw[j] = p[i];
                        // cerr << i+1 << nl;
                        // cerr << nw[j] << nl;
                }

                hash[p[i]] = 0;  
                i = i + freq - 1;

              }
              else{
                if(ind[a[i]]> i){
                    int dif = ind[a[i]]- i ;
                   
                     for(int j = i ; j < ind[a[i]] ; j++){ 
                          nw[j] = a[i] ;
                          hash[a[i]]-- ;
                    }
                        i = ind[a[i]]-1 ;
                   
                }
                else if(ind[a[i]] == i-1){
                      nw[i] = a[i] ;
                      hash[a[i]]-- ;
                }

            }

           }
      }

      // output(nw) ;
      // output(a) ;

      if(nw == a){
         yes ;
      }
      else{
          no ;
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
