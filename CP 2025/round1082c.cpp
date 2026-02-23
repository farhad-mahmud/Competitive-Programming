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
         int  n ; cin >> n;
         vector<int > a(n) ;for(int i=0;i<n;i++)cin >> a[i] ;

         map<int,int > hash ;
         map<int,bool> par ;

         for(auto x : a){
               //hash[x]++ ;
               par[x] = false ;
         }

         int cnt = 0 ;
         for(int i=0;i<n;i++){
              

              if(i==0){
                  par[a[i]] = true ;
                  hash[a[i]]++ ;
                  cnt++ ;
                  continue ;
              }

              // if(i==2){
              //     cout << "h" << nl; 
              //     cout << a[i]-1 << nl;
              //     cout << hash[a[i]-1] << nl ;
              // }

              if(hash[a[i]-1]>=1 && par[a[i]-1]){ // age ai-1 jdi exist kore ar parent hoy..
                  //child o ache parent o ache.
                 // ekhon.. first child hole.parent ager index ei thakte hbe..
                  if(hash[a[i]] == 0){  // mane ai, first child..
                        if(a[i]-1 == a[i-1]){ // parent jodi ager index e hoy..
                              // count hbena
                           hash[a[i]]++ ;
                           continue ;
                        }
                        else {
                             cerr << i << nl ;
                             cnt++ ;
                        }
                  }
                  else {  // first child na hole..
                        hash[a[i]]++;
                        continue ;
                  }
                  //cerr << "he " << i << nl ;
                  hash[a[i]]++ ;
                  continue;
              }
              else if(hash[a[i]-1]>=1 && !par[a[i]-1]){  // ai-1 exist kore but parrent na..
                  // cerr << "four" << i << nl ;
                   if(hash[a[i]] == 0){  // mane ai, first child..
                        if(a[i]-1 == a[i-1]){ // parent jodi ager index e hoy..
                              // count hbena
                           hash[a[i]]++ ;
                           continue ;
                        }
                        else {
                         
                             cnt++ ;
                        }
                  }
                  else {  // first child na hole..
                        hash[a[i]]++;
                        continue ;
                  }
                  hash[a[i]]++ ;
                  continue ;
              }
              else if(hash[a[i]-1]== 0){   // parent.. exist i korena..
                 
                    par[a[i]] = true ; // new parent..
                    cnt++ ;

                    //cerr << hash[a[i]-1] << nl;
                    hash[a[i]]++ ;
              }

         }

         cout << cnt << nl; 
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
