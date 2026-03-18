//---  Bismillahir Rahmanir Rahim ---//


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
      vector<int> a(n); for(int i=0;i<n;i++)cin >> a[i];

      vector<pair<int,int > > v ;
      //ends with 0 , same catagory..
      for(int i=0;i<n;i++){
            if(a[i] < 10){
                if(a[i] == 1 || a[i] == 3){
                      a[i]+= a[i];

                      v.push_back({0,a[i]});

                }
                else if(a[i] == 7){
                     v.push_back({1,4});
                }
                else{
                     v.push_back({0,a[i]});
                }
            }
            else{

                 int last = a[i] % 10 ;   
                 int pos = a[i] / 10 ;

                 if(last == 1 || last == 3){
                      last+=last ;
                      v.push_back({pos,last});
                 }
                 else if(last == 7){
                      v.push_back({pos+1,4});
                 }
                 else{
                     v.push_back({pos,last});
                 }

            }
      }



}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
