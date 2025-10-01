#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;
void solve ()
{
        
     
                 int n ; cin >> n ;

                 string a ,b ;   cin >> a >> b ;

                 int even1 = 0  , odd1 =0 , even0 =0,  odd0 = 0 ; 

                 for(int i=0;i<n;i++){


                           if(i % 2 == 0){

                                  if(a[i] == '1')
                                  { 
                                    even1++ ;
                                  }
                                  if(b[i] == '0')
                                  {
                                   even0++ ;
                               }

                           }

                           else {

                                    if(a[i] == '1') {

                                     odd1++ ; 

                                      }

                                    if(b[i] == '0') 
                                        {
                                            odd0++ ;
                                        }
                           }
                 }
                
          //      cout << even1 <<  odd1 << endl ;

                 if(even1 == 0 && odd1 == 0)    
                   {

                        yes ;
                        
                   }
                 else if (odd1 > even0 || even1 > odd0) 
                    { 

                        no ;

                    }
                 else   {

                  yes ; 

              }
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

    int t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
