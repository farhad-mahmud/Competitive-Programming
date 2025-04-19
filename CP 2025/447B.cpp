#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
        
                            
                              string s ; cin >> s ;
                              
                              int k ; cin >> k ;

                              
                              vector < int > a (26);

                              for(int i=0; i<26 ; i++){


                                      cin >> a[i] ;
                              }
                              
                              vector < pair <char , int  > > p  ;


                            
                              for(int i=0 ; i < 26 ; i++){


                                      p.push_back({char('a' + i) , a[i] }) ;
                              }

                           
                              int l = (s.length() + 1 ) ;

                              int res=  0;

                              int ma = *max_element(a.begin(),a.end()) ;

                             

                              int res1 = 0 ;
                                        

                              for(int i=0 ; i <s.length() ;i++){

                                       
                                        int pos = i +1 ;
                                          for(int j = 0 ; j<26 ;j++){
                                                        
                                                   if (s[i] == p[j].first) {
                                                                

                                                         res1 +=  pos*p[j].second ;
                                                       
                                                         break; 

                                                   }
                                          }
                              }



                              int n = (s.length() + k) ;

                              for(int i = l ; i <= n ;i++){

                                           res += i * ma ;

                              }
                             
                               
                              int f = res + res1 ;


                              cout << f << endl ;

}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
