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

const int N = 1e4 + 9;
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

    //now.. ans[1] has elements multiple of 1 , in the array .. 
    // so for a specific ,, number .. how many pairs it can be form..
    // its n*n-1/2 ;

    for(int i=1;i<k;i++){
          ans[i] = (ans[i]*(ans[i]-1))/2;
    }

    // for(int i=1;i<k;i++){
    //      cout << "pairs with gcd " << i << ": " << ans[i] << nl;

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

    for(int i= k-1;i>=1;i--){
        for(int j=i+i ;j<k;j+=i){
              ans[i] -= ans[j] ;
         }
    }

    vector<bool > hash(k, true) ;

    // so here ,, for a gcd .. 2 ,, if we found it , we 
    // will mark every multiple of 2 , as false 
    // caue we dont wanna overcount.. 
    // ans[i] = false , means ,, a divisor of gcd (i) 
    // is there in the array ..
    for(auto x : a){
        if(!hash[x])continue ;
        for(int j=x;j<k;j+=x){
            if(hash[j]){
                hash[j] = false ;
            }
        }
    }
   

    int sum = 0 ;
    for(int i=1;i<k;i++){
          if(hash[i]){
                sum+= ans[i] ;
                //cout << "gcdcnt of gcd " << i << ": " << ans[i] << nl;
          }
    }

    cout << sum << nl;

      
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
