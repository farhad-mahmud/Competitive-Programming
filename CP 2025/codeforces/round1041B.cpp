#include <bits/stdc++.h>
using namespace std;

#define ll  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
             int n , x ; cin >> n >> x ;

             string s ; cin >> s ;
             x-- ;

             int cnt1 = count(all(s),'#') ;

             int cnt2 = count(all(s),'.') ;

             if(cnt2 == n){ cout << 1 << nl ; return ;}

             int l_w = 0, l_c= 0 ;
             int r_w = 0 , r_c = 0 ;

             for(int i=0;i<x;i++){

                   if(s[i] == '.'){

                        l_c++ ;
                   }
                   else{

                        l_w++;
                   }
             }

             for(int i=x+1;i<n;i++){

                   if(s[i] == '.'){

                        r_c++ ;
                   }
                   else {

                        r_w++;
                   }
             }

          
           if(l_w == 0 || r_w == 0){

                cout << 1 << nl;
                return ;
           }


           int d = 0 ;
           while(true ){

                 int l_t = l_c + l_w ;

                 int r_t = r_c + r_w ;

                 if(l_t <= r_t){

                      if(l_c > 0){

                            l_c-- ;
                            l_w++ ;
                      }
                      else if(r_c > 0){
                          r_c-- ;
                          r_w++ ;
                      }
                 }else {

                      if(r_c >0){
                          r_c-- ;
                          r_w++ ;
                      }
                      else if(l_c >0){

                          l_c-- ;
                          l_w++ ;
                      }
                 }

                 d++ ;

                 l_t = l_c + l_w ;
                 r_t = r_c + r_w ;

                 if(l_t <= r_t){

                     if(l_w ==0){
                          break ;
                     }
                     else {
                          l_w-- ;
                     }
                 }
                 else {

                      if(r_w ==0){

                          break ;
                      }
                      else {
                          r_w-- ;
                      }
                 }
           }


           cout << d << nl ;

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
