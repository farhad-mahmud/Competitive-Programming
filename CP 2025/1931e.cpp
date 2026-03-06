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
         int n , m ; cin >> n >> m ;
         vector<int>a(n); for(int i=0;i<n;i++)cin >> a[i];

         vector<int > v(n);

         int get = m +1 ;

         map<int,int > freq ;
         int total = 0 ;
         for(int i=0;i<n;i++){
                int nm = a[i];

                while(nm > 0){
                    int d = nm % 10 ;
                    freq[d]++ ;
                    total++;
                    nm/=10 ;
                }

         }

         for(int i=0;i<n;i++){
               int nm = a[i];
               int cnt = 0 ;
               while(nm % 10 ==0){
                    cnt++;
                    nm/=10 ;
               }
               if(cnt > 0){
               v.push_back(cnt);
               }
         }

         sort(allr(v));

         //cerr << total << nl ;

         //output(v);

         for(int i=0;i<n;i++){
              int j = i+1 ;
              if(j % 2 == 1){
                  total -= v[i];
              }   
         }
         //cerr << total << nl;

         if(total >get){
              cout << "Sasha" << nl; 
         }
         else if(total == get){
              int cnt = 0 ;

               for(auto [n,f] : freq){
                     if(n >= 1){
                          cnt+= f ;
                     }
               }
               //cerr << cnt << nl;

               if(total == 1){
                   cout << "Sasha" << nl;
               }
               else {
               if(cnt > 1){   
                    cout << "Sasha" << nl;
               }
               else {
                    cout << "Anna" << nl;
               }
            }

         }
         else{
              cout << "Anna" << nl;
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
