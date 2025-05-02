#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;


void solve ()
{
        
                int n ; cin >> n;

                vector<int > a(n+1);

                for(int i=1;i<=n;i++){

                       cin >> a[i] ;
                }

                  

                  int ans = 0 ;
               for(int i=1;i<=n;i++){
        
              for(int j=a[i]-i;j<=n;j+=a[i])
              {

               // cout << "j " << endl;  

                if(j>0)
                {
                    if(i>j&&a[i]*a[j]==i+j)
                    {
                        ans++;
                    }
                }
            }
        }

              cout<<ans<<endl;
 

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
