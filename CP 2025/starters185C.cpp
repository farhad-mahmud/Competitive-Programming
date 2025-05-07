#include <bits/stdc++.h>

using namespace std;

#define ll long long ;

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
const int  MOD = 1e9 + 7;



void solve ()
{
        
                  int n , h ; cin >>n >> h ;

                  vector <string > s(n), d(n) ;



                  for(int i = 0 ;i < n;i++){

                          cin >> s[i] ;
                          cin >> d[i] ;
                  }

                
                
                  vector<pair <int, int >> best ;

                for(int i=0 ;i<n;i++){

                        int sec = stoll(s[i]);
                        int damage =  stoll(d[i]);
                        int b = ceil(damage / sec) ;

                        best.push_back({damage,sec}) ;

                }   

            
            sort(best.begin(), best.end(), [](pair<int, int>& a, pair<int, int>& b) {
              return a.first > b.first;
            });
               
              
                 

                
                  int w = (h/ best[0].first) ;


                  int s1 = best[0].second * w ;

                  int need = (h - best[0].first * w );

                  if(need <= 0){

                        cout << s1 << endl;
                        return ;
                  }
                  
             
                   long long   s2 = LLONG_MAX ;

                   for (int i = 0; i < n; i++) {

                     int damage = stoll(d[i]) ;
                     int sec = stoll(s[i]) ;
                 if (damage >= need) {
                      s2 = min(s2,(long long)sec);
                    }
                     }

               
             if(s2 == LLONG_MAX) s2 = 0;

             cout << s1 + s2 << endl;

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
