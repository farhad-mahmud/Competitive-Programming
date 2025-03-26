#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define  all(x)  x.begin(),x.end() ;
const ll MOD = 1e9 + 7;

void solve ()
{
        
           int n , x ;  cin >> n >> x ;
           
           vector <int > a(n) ;
           for(int i=0;i<n;i++){

                  cin >> a[i] ;
           }
 

   
       
          sort(a.rbegin(),a.rend()) ;
 
            int cnt = 0;
        
     

              int sum = 0 ;

              vector <int > u ;

                for(int i=0;i<a.size();i++){
               
                          sum += a[i] ;
                          u.push_back(a[i]) ;

                          int mi = *min_element(u.begin(),u.end()) ;

                          if(sum >= x){

                                 int check = (mi*u.size()) ;

                                 if(check >=x){
 
                                        cnt++ ;

                                        sum = 0 ;
                                      
                                        u.clear() ;
                                 }

                                  
                          }

                
                }

             cout << cnt << endl; 
          
        
}




int32_t main() {
  FAST_IO

    int  t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
