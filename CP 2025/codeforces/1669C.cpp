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
            int arr[n] ;
          for(int i=1;i<=n;i++){

                    cin >> arr[i] ;
          }
         
               int odd_x = 0, even_d= 0 ;

           for(int i=1;i<=n;i+=2){
                      
                      if(arr[i] % 2 ==0){

                            odd_x++ ;
                      }
                      else {

                               even_d++ ;
                      }
                    //  cout << "odd index : " <<  arr[i] << endl;

           }
       
             int odd_j = 0 , even_k = 0;
            for(int i=2;i<=n;i+=2){
                 if(arr[i] % 2 ==0){

                          odd_j++ ;
                      }
                      else {

                              even_k++ ;
                      }
                  //    cout << "even index : " << arr[i] << endl;


            }
 
             if(odd_x > 0 && even_d > 0  ||  odd_j > 0 && even_k > 0){

                        cout << "NO" << endl;
             }
             else {

                     cout << "YES" << endl;
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
