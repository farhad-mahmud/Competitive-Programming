#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
               
                  int n , m ; cin >> n >> m ;

                  int a[n+5] ;

                  vector <int > v ;

                  for(int i=1;i<=n;i++){

                         cin >> a[i] ;

                  }

                  int b[m+5] ;

                  for(int i=1;i<=m;i++){

                           cin>> b[i] ;

                           v.push_back(b[i]) ;
                  }

                  sort(v.begin(),v.end()) ;  int b1 = v[0] ;

                  int prev = min({a[1],v[0] - a[1],v[m-1]-a[1]}) ;

                  bool sorted = true ;

                  for(int i=2 ;i<=n;i++){

                                // find the smallest b[j] such that b[j] - a[i] >= prev

                        int target = prev + a[i] ;  
                        // cause we wanna replace a[i] with b[j] - a[i] ;
                        // new_ai = b[j] - a[i] ;
                        // we want new_ai >= prev
                        //  b[j] - a[i] >= prev
                        //  b[j] >= prev + a[i] ;
                        // so the smallest b[j] should be == target ;

                        auto it = lower_bound(v.begin(),v.end(),target) ;

                        
                        if(it == v.end() and a[i] <prev) {

                            
                            // couldnt find smallest b[j] cause it is the max of b ;

                                  sorted = false ;

                                  break ;
                        }

                        if(it!= v.end()){    // founded smallest b[j] ;
                                b1 = *it ;

                                int cur = b1 - a[i]; 

                                if(cur < prev and a[i] < prev) {
                                   
                                        sorted = false ;
                                        break ;
                                }

                                if((cur >= prev and cur <a[i]) or a[i] < prev){


                                           a[i] = cur ;
                                }
                          

                        }

                        prev = a[i] ;

                  }

         
               if(sorted) {

                     yes ;
               }
               else {

                   no ;
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
