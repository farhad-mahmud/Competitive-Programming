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
                     
                     vector <int > a(n) ;

                     for(int i=0;i<n;i++){

                           cin >> a[i] ;
                     }



                          int flag = 0 ;

                           int cnt = 0 ;
                           int cnt2 = 0 ;

                     for(int i=0;i<n-1;i++){

                            if(a[i] < a[i+1]){
                                
                                   cnt++;
                            }
                            
                            if(a[i] > a[i+1]){

                                   cnt2++ ;
                            }

                     }

                   //  cout << cnt << cnt2 << endl;
                      
                     if(a[0] == 0 || a.back() == 0 ){

                                   if(cnt == 0 || cnt2 == 0){


                                                 cout << 2 << endl;
                                   }

                     }
                     else {


                                     cout << 0 << endl;
                     }

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
