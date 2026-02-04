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
    int k= n+2 ;
    // got the multiples of 1,2,3,4...till n if multiple of them 
    // exists in the array elements..
    for(int i=1;i<k;i++){
       for(int j=i;j<k;j+=i){
           ans[i] += freq[j];
           if(i== 1){
    //cerr << i << ' ' << ans[i] << ' ' << "freq of num " << j << ' ' << freq[j] << nl;
        }
       }
    }

    for(int i=1;i<k;i++){
          ans[i] = (ans[i]*(ans[i]-1))/2;
    }

    // for(int i=1;i<k;i++){
    //      cout << "pairs with gcd " << i << ": " << ans[i] << nl;

    // }

    for(int i= k-1;i>=1;i--){
        for(int j=i+i ;j<k;j+=i){
              ans[i] -= ans[j] ;
         }
    }

    int sum = 0 ;
   for(int i=1;i<k;i++){
       cout << "pairs with gcd " << i << ": " << ans[i] << nl;

       if(freq[i] == 0){
                sum+= ans[i];
                cerr << i << ' ' << ans[i] << nl; 
       }
   }

  cout << sum << nl ;

      
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
