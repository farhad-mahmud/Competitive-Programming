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
      int n ; cin >> n ;
      vector<int> a(n); for(int i=0;i<n;i++)cin >> a[i];

      set <int > st ;
      //ends with 0 , same catagory..
      bool f= false ;
      bool g = false ;

      for(int i=0;i<n;i++){
           int last = a[i] % 10 ;
           if(last == 0){
               f = true ;
           }
           if(last == 5){
              a[i]+= 5 ;
              g = true ;
           }

           st.insert(a[i]);
      }
      if(f || g){
      if(st.size() == 1){
           yes;
           return ;
      }
      else{
           no ;
           return ;
      }
   }

     st.clear();

     // cerr <<"h" << nl;

      for(int i=0;i<n;i++){
         int nw = 0 ;
         int num = a[i] % 10 ;
         if(a[i] >= 10){
              nw = a[i] - num ;
         }
         else{
              nw = 0 ;
         }
         while( num % 10 != 2){
            if(num <10){
               num+= num ;
            }
            else{
                int nn = num % 10 ;
                num+= nn ;
            }
         }  
         
         //cerr << num << nl;
           num+= nw ;
          // cerr << num << nl;
          int mod = num % 20 ;
          //cerr << mod << nl;
          st.insert(mod);
      }


     if(st.size() == 1){
         yes;
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
