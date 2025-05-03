#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;
void solve ()
{
        

                       string s ; cin >> s;

                       string t ; cin >> t ;
                       

                       int s_l = s.length() ;
                       int t_l = t.length() ;

                       cout << s_l << endl; 

                       bool found = false ;

                       int cnt = 0 ;

                       for(int i=0;i<t_l;i++){

                            for(int j= 0 ;j<s_l;j++){

                                 if(b[i] == a[j]){

                                       found = true ;
                                          

                                 }
                            }

                             if(!found){

                                  break ;
                             }

                       }


                     for(int i=0;i<s_l ;i++){
                             int j = 0 ;

                             if(b[j] == a[i]){

                                  

                                   while(b[j] == a[i]){


                                            cnt++ ;

                                            j++;
                                            i++ ;
                                   }

                             }
                           
                            j++;

                     }


}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

        // cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
