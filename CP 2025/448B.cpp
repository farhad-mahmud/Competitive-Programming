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
                       

                       int s_l = s.size() ;
                       int t_l = t.size() ;

                   
                       int k = 0 ;

                       for(int i=0 ;i<s_l && k<t_l ;i++){

                                 if(s[i] == t[k]){

                                      k++;
                                 }
                       }  

                   
                       if(k == t_l){

                            cout << "automaton" << endl;
                            return ;
                       }
                       

                      vector<int > cnt(26) ;

                      for(int i= 0;i<s_l;i++){

                              cnt[s[i] - 'a']++ ; // count character in string s
                      }


                      for(int i = 0;i<t_l ;i++){

                              cnt[t[i] - 'a']-- ; // substract characters found in
                                                  // t ;
                      }


                      bool ok = true ;

                      for(int i=0;i<26 ;i++){

                             ok &= (cnt[i] == 0);

                             if(cnt[i] <0){

                                   cout << "need tree" << endl;
                                   return ;
                             }
                      }


                     if(ok){

                         cout << "array" << endl;
                     }
                     else{

                           cout << "both" <<endl;
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
