#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define vi       vector<int > 
#define  forr    for(auto &i : x) 
const int  MOD = 1e9 + 7;


void solve ()
{
                 int n ; cin >> n ;

                 vector<int > a(n) ;

                 int c = 0;

                 for(int i=0;i<n;i++){

                        cin >> a[i] ;

                        if(a[i] < 0){

                              c++ ;
                        }
                 }
       

               vector<int > u = a ;

               sort(u.begin(),u.end()) ;

               if(a == u){

                     yes ;
                     return ;
               }
 
                   

                   int cnt = 0 ;

               for(int i=0 ;i<n;i++){

                      if(a[i] < 0 && c-1 <i){
 
                            a[i] = a[i]*(-1) ;
                      }

                      if(a[i] > 0 && c-1 >=i){

                              a[i] = a[i]*(-1) ;
                      }
               }


               vector<int > h = a ;


               sort(h.begin(),h.end()) ;

               if(h == a){

                     yes ;
               }
               else {
                     no ;
               }

            



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
