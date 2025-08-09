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
                int n , m ; cin >> n >> m ;

                string s ; cin >> s ;
               
                int cnt0 = count(all(s) , '0') ;

                if(cnt0 == n){

                     cout << n*m << nl;
                     return ;
                }

                string tmp = s ;

                if(m%2==0){

                     s+= tmp ;
                }
                else {

                     s+= tmp + tmp ;
                }

                vector<int > v ;
                
                for(int i=0;i<s.length() ;i++){

                     int tmp = 0 ;

                     tmp = s[i] - '0' ;

                     v.push_back(tmp) ;
                }

                //output(v) ;
                int k = v.size() ;

                vector<int > pref(k) , suf(k) ;

                pref[0] = v[0] ;

                for(int i=1;i<k;i++){

                    pref[i] = pref[i-1] + v[i] ;
                }

                suf[k-1] = v[k-1] ;

                for(int i=k-2;i>=0;i--){

                    suf[i] =suf[i+1] + v[i] ;
                }

                int cnt = 0 ;

               for(int i=0;i<k-1;i++){
               

                    if(pref[i] == suf[i+1]){

                        cnt++ ;
                    }

               }
                

             cout << cnt << nl; 
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
