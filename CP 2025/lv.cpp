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
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
                  int n ; cin >> n ;

                  string s ; cin >> s;

                  int cnt1 =0, cnt2 = 0 ;

                  for(int i=0;i<n;i++){

                       if(s[i] == 'l'){

                           cnt1++ ;
                       }

                       if(s[i] == 'v'){

                           cnt2++ ;
                       }
                  }

             
                  int f = 0  ;

                  int x = 0 ;

                  for(int i=0;i<n-1;i++){

                        if(s[i] == 'l' && s[i+1] == 'v'){

                                 f = 1;
                                 break ;
                        }

                        if(s[i]=='v' && s[i+1] == 'l'){

                               x = 1;

                        }
                  }

                  int y = 0 ;

                  if(s[n-1] == 'l'){

                         y = 1 ;
                  }
            
                 //dbug(s[n-1])  ;

                  if(f){

                       cout << 0 << nl;
                       return ;
                  }

                  if(cnt1 == 0 && cnt2 ==0){

                         cout << 2 << nl ;
                  }

                  else if(cnt1 >=1 && cnt2 ==0 || cnt2 >=1 && cnt2 ==0){

                           if(cnt1 ==1){
                                if(y){

                                   cout << 2 << nl;
                                }
                                else {

                                    cout << 1 << nl;
                                }
                           }
                           else {

                                cout << 1 << nl; 
                           }
                  }
                  else if(cnt1 ==1 && cnt2 ==1){

                         if(x){

                             cout << 1 << nl;
                         }
                         else if(y){

                             cout << 2 << nl; 
                         }
                         else {

                             cout << 1 << nl;
                         }


                  }
                  else {

                       cout << 1 << nl  ;
                  }


          
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
