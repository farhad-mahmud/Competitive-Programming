//------------------------------//
//        Author: Farhad       //
//------------------------------//

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


void solve ()
{
                   int n ; cin >> n ;

                   vector<int > a(n+1) ;

                   for(int i=1;i<=n;i++) cin >> a[i] ;
                   stack<int > s ;
                   vector<int > v(n+1) ;
                   for(int i=1;i<=n;i++){
                       while(!s.empty() && a[s.top()] >= a[i]){
                            s.pop() ;
                       }
                       if(!s.empty()){

                              v[i] = s.top() ;
                       }
                       else { 
                            v[i] = 0 ;
                       }
                       s.push(i) ;
                   }


                   for(int i=1;i<=n;i++){

                        cout << v[i] << ' ' ;
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
