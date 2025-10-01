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

                 string  s ; cin >> s ;
                 int mid=0;;

                 if(n&1)
                 {
                  mid=(n)/2;
                 }else
                 {
                  mid=(n)/2 -1;
                 }

                 int cnt = 0 ;

                 for(int i=mid ;i<n;i++){
                     //cout<<s[i]<<endl;
                        if(s[mid] == s[i]){

                              cnt++ ;
                        }else break;

                 }

                 for(int i=mid-1; i>=0;i--){

                        if(s[mid] == s[i]){ 

                             cnt++ ;

                        }else break;
                 }


                 cout << cnt << nl ;
                 
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
