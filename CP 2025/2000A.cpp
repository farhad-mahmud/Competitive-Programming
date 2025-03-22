#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;
void solve ()
{
        
           int a  ;cin >> a ;
           int r = 0 ;
           int cnt = 0 ;
          
          while(a>10){

                r = a % 10 ;

                   a = a/10 ;

                    cnt++ ;
          }
 
     //    cout << a << " " << r << endl;

          if(a==10 && r==1 && cnt>1){

              yes ;
          }
         
          else if(a == 10 && r >=2 ){

               yes ;
          }
          else {

              no ;
          }

       
        
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

    int  t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
