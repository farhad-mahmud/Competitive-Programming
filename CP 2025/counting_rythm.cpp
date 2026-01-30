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
    vector<int > a(n); for(int i=0;i<n;i++)cin >> a[i];

    vector<int > ans(n+2,0), freq(n+2,0);

    for(auto x : a){
         freq[x]++ ;
         //cerr << freq[x] << nl; 
    }   


    // got the multiples of 1,2,3,4...till 1e6 if multiple of them 
    // exists in the array elements..
    for(int i=1;i<n;i++){
       for(int j=i;j<n;j+=i){
           ans[i] += freq[j];
           cerr << ans[i] << nl; 
       }
    }

    //now.. ans[1] has elements multiple of 1 , in the array .. 
    // so for a specific ,, number .. how many pairs it can be form..
    // its n*n-1/2 ;

    for(int i=1;i<n;i++){
          ans[i] = (ans[i]*(ans[i]-1))/2;
    }

    // for test print..
    // for(auto x : ans){
    //       cout << x << nl ;
    // }

    //now.. we will go , from highest numbers to lowest..
    // assume for a number 10 we found.. ans[5] = 6...
    // so inside that count..we have ..the count of 1 . also , cause
    // at first we found the multiples of 1.. so 5 was counted in..
    // also assume if i found ans[8] = 3 .. so in this count of 8 , there
    //also exists the count of number 4 .. so we are gonna do
    // ans[4]-= ans[8] .. so the ans[8] will become.. 0..
    // then also ans[2]-= ans[4].. ans[4] would be 0 , then ans[1]-= ans[2]
    // that ..way, in ans[1] = will be number of pairs of integers that 
    // are coprime..why?think...
    // 

    for(int i= n-1;i>=1;i--){
        for(int j=i+i ;j<n;j+=i){
              ans[i] -= ans[j] ;
         }
    }

    for(auto x : ans){
          cout << x << nl ;
    }

      
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   // cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
