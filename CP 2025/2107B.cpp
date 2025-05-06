#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
const int  MOD = 1e9 + 7;

void solve ()
{
        

              int n , k ; cin >> n >> k ;   

              vector<int > a(n);

              for(int i=0;i<n;i++){

                    cin >> a[i] ;
              }

          sort(all(a));



          if(a.back() - a[0] > k+1 || (a.back() - a[0] > k && a[n-1] == a[n-2]))
          {

                    cout << "Jerry" << endl;

                    return ;
          }

          int cnt = 0 ; int sum = 0 ;

           for(int i=0;i<n;i++){

                  sum += a[i];

           }

            if(sum & 1){

                      cout << "Tom" << endl;
            }
            else {

                        cout << "Jerry" << endl;
            }

}


/* Hey you should check this out
    * solve test cases at first without watching note ;
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * do something instead of nothing and stay organized
    * bruteforce to find pattern
    * DON'T GET STUCK ON ONE APPROACH
    * Think the problem backwards
    * In practice time don't see failing test case
*/


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
