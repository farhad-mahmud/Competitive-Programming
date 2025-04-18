#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
        
                 
                  int n , m  ;   cin >> n >> m ;

                 
                   

                    vector < string > a (m) ;
                    vector < string > b (m) ;

                    vector < string > c (n) ;

                  
                     for(int i=0;i<m;i++){
                              
                             cin >> a[i] ;

                             cin >> b[i] ;
                                             
                     }

                           
                    

                for(int i= 0 ; i<n ; i++) {

                   
                        cin >> c[i] ;

               }

       




                 for(int i = 0 ;i < n ;i++){


                           for(int j = 0 ; j< m ; j++){
                                                       

                                     if(a[j] == c[i] || b[j] == c[i]){ 


                                           if(a[j].size() > b[j].size()){


                                                 cout <<  b[j]  << " " ;
                                               

                                              }
                                              else 
                                              {


                                                       cout << a[j] << " " ;

                                                     
                                              }

                                         }


                                       
                                    }
                           }

                 
 
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

     //    cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
