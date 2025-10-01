#include <bits/stdc++.h>

using namespace std;

#define ll  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
const int  MOD = 1e9 + 7;



void solve ()
{
        
                int d , sumtime ; cin >> d >> sumtime ;

                vector< int > mintime(d) ;

                vector <int >maxtime(d) ;
       

                  for(int i=0;i<d;i++){

                            cin >> mintime[i];

                            cin >> maxtime[i];
                  }


               
                   int min_sum = 0;

                   int max_sum = 0 ;

                  for(int i=0;i<d;i++){

                         min_sum += mintime[i] ;

                         max_sum += maxtime[i]; 
                  }


                if(min_sum > sumtime || max_sum < sumtime){

                            cout << "NO" << endl;

                            return ;
                }

                cout << "YES" << endl;
            
               int need = sumtime - min_sum ;

                for(int i =0;i<d;i++){

                         if(maxtime[i] - mintime[i] >= need){

                              
                                   cout << mintime[i] + need << ' ' ;

                                   need = 0 ;  
                         }

                         else{

                                cout << maxtime[i] << ' ' ;

                                need -= maxtime[i] - mintime[i] ;

                             }
                }


}





int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

       //  cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
