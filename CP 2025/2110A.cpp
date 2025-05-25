#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()

const int  MOD = 1e9 + 7;


void solve ()
{
                        
                        int n ; cin >> n;

                        vector<int > a(n) ;

                        for(int i=0;i<n;i++){

                              cin >> a[i] ;
                        }

                        sort(a.begin(),a.end()) ;

                        int mx = *max_element(a.begin(),a.end());

                        int mi = *min_element(a.begin(),a.end()) ;


                     int sum = 0 ;
                     sum = mx + mi ;

                      //cout << "The array " << endl; 

                   //  for(auto i : a){

                     //      cout << i << " " ;
                    // }

                    // cout << endl; 

                     //cout << mx << " " << mi << endl; 

                    

                     if(sum % 2 ==0){

                           cout << 0 << endl; 
                           return ;
                     }
                   
                   

                      int cnt = 0 ;
                    
                     for(int i=0;i<n;i++){

                             if((a[i] + mx) % 2 ==0){

                                      break ;
                             }
                             else {

                                   cnt++ ;
                             }
                     }

                    
                      int cnt2 = 0 ;

                     for(int i= n-1 ; i>=0 ;i--){


                        if((a[i] + mi) % 2 ==0){

                                      break ;
                             }
                             else {

                                   cnt2++ ;
                             }
                     }

                    // cout << cnt2 << endl ;




                  cout << min(cnt , cnt2) << endl; 
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
