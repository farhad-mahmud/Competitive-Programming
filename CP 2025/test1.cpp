#include <bits/stdc++.h>
using namespace std;

#define ll  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define pii pair<int,int>
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
                  string s , t  ; cin >> s >> t ;


                  string k =  "" ;

                  for(int i=0;i<s.length();i++){


                     for(int j=0;j<t.length();j++){

                            if(t[j] == 'h'){

                              if(s[i] == 'p'){

                                   s[i] = 'q' ;
                              }
                              else if(s[i] == 'b'){

                                  s[i] = 'd' ;
                              }
                              else if(s[i] == 'q'){

                                  s[i] = 'p' ;
                              }
                              else if(s[i] == 'd'){

                                   s[i] = 'b' ;
                              }

                                reverse(s.begin(),s.end()) ;

                                //cerr << " h : " <<  s << nl ;

                            }

                            else if(t[j] == 'v'){

                                  if(s[i] == 'b'){

                                   s[i] = 'p'; 
                              }
                              else if(s[i] == 'q'){

                                  s[i] = 'd'; 
                              }
                              else if(s[i] == 'd'){

                                  s[i] = 'q' ;
                              }
                              else if(s[i] == 'p'){

                                  s[i] = 'b'; 
                              }

                              //cerr << " v " <<  s << nl ;


                            }

                            else {

                                 if(s[i] == 'b'){

                                 s[i] = 'q' ;
                              }
                              else if(s[i] == 'q'){

                                  s[i] = 'b'; 
                              }
                              else if(s[i] == 'p'){

                                  s[i] = 'd' ;
                              }
                              else if(s[i] == 'd'){

                                  s[i] = 'p'; 
                              }

                              reverse(s.begin(),s.end()) ;
                                 
                                // cerr << " r " <<  s << nl; 
                            }
                     }



                  }   



                  cout << s << nl;  
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
