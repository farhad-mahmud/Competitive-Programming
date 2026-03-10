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

int n ; 
vector<pair<int,int >> v;
bool f(int x){
   int cnt = 0 ;
      if(x == 7){

         //int cnt = 0;
         int s = 0 ;
         int from = 0 ;
        for(auto[l,r] : v){
             int plus = s+ x ;
             int minus = s - x ;
             int to = min(l,r);
             if(from < to){ // barbe..
                  
                  int dis = to - from ;
                  if(dis <= plus){
                       cnt++;
                       s+= dis ;
                  }
                  from = to ;
             }
             else if(to < from){  //kombe..
                  int dis = from - to ;

                  if(dis <= minus){
                       cnt++ ;
                       s-=dis ;
                  }
                  from = to ;
             } 
            
        }

        cerr << x <<  ' ' << cnt << nl ;

     }
        if(cnt == n){
           return true ;
        }
        else{
           return false ;
        }
    
}
void solve ()
{  
        
      cin >> n ;

      for(int i=0;i<n;i++){
           int l , r ; cin >> l >> r ;
           v.push_back({l,r});
      }


      vector<int > k ;

      int from = 0 ;
      for(auto [l,r] : v){
            //cerr << l << ' ' << r << nl; 
            int to = min(l,r);
            int d = abs(from - to);
            k.push_back(d);
            from = to;         
      }

     // output(k);

      int l = *min_element(all(k));
      int r = *max_element(all(k));

      while(l<=r){
           int mid = (l+r)/2 ;

           if(f(mid)){
               r = mid -1 ;
           }
           else {
               l = mid +1 ;
           }
      }


      cout << r <<  nl; 
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
