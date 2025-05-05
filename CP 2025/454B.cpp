#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;

int n ;
int a[100086] ;

bool judge(int pos){


               for(int i= pos+1 ;i<=n;i++){

                       if(a[i] < a[i-1])
                       {

                                return false ;
                       }
               }

               return true ;
}

void solve ()
{
        

                 
                  cin >> n ;

                  for(int i=1;i<=n;i++) 
                     {
                        cin >> a[i] ;
                         
                     }

                     int pos = -1 ;

               
              for(int i=2;i<=n;i++){

                     if(a[i] < a[i-1]){

                              pos = i;

                              break;

                     }

              }

             
               if(pos == -1){

                         cout << 0 << endl ;
                         return ;
               }
               else if((!judge(pos)) || a[n] > a[1]){


                          cout << -1 << endl;

                          return ;
               }
               else {


                        cout << n- pos +1 << endl; 
               }





               
               



}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
